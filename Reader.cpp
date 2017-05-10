#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include"Account.h"

using namespace std;

Account::Account()
{
	admin = librarian = reader = true;
	AccountName = "Anh Quan";
	AccountPassword = "fuck_you";
	UserID = "anh.quan.admin";
}

void Account::getProfile()
{
	cout << left << setw(20) << "Ten" << ": " << AccountName << endl;
	cout << left << setw(20) << "ID cua nguoi dung" << ": " << UserID << endl;
	cout << left << setw(20) << "Quyen truy cap" << ": ";
	if (admin == true)
		cout << "[Admin] ";
	if (librarian == true)
		cout << "[Thu thu] ";
	if (reader == true)
		cout << "[Doc gia] ";
	cout << endl;
}

void Account::changeAccountPassword()
{
	string pas, repas;
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		cout << "Xin nhap lai mat khau cu. Ban con " << 5-i << " lan nhap :\n";
		getline(cin, pas);
		if (pas == AccountPassword)
		{
			check = true;
			break;
		}
		else
			check = false;
		system("cls");
	}
	system("cls");
	if (check == true)
	{
		bool correct = false;
		do
		{
			cout << "Xin nhap mat khau moi :\n";
			getline(cin,repas);
			cout << "Xin nhap lai mat khau moi :\n";
			getline(cin,pas);
			if (pas == repas)
			{
				AccountPassword = pas;
				cout << "Thay doi mat khau thanh cong.\n";
				correct = true;
				system("pause");
			}
			else
				cout << "Mat khau trong 2 lan nhap khong trung nhau !\n";
			system("pause");
			system("cls");
		}
		while (correct == false);


	}
}

void Account::getNotice()
{
	ifstream notice;
	string line;
	int count = 0;
	notice.open("Notice.txt");
	cout << "Cac thong bao hien co :\n";
	while (notice.eof() == false)
	{
		getline(notice,line);
		if (line.length() > 0)
		{
			count++;
			cout << line << endl;
		}
		else
			continue;
	}
	if (count == 0)
		cout << "Khong co thong bao moi.\n";
	else
		cout << "Co " << count << " thong bao hien tai.\n";
	notice.close();
	system("pause");
}

int Account::LevashteinDistance(string str1, string str2)
{
	int len_str1 = str1.length();
	int len_str2 = str2.length();
	vector <vector<int>> cost_table(len_str1 + 1, vector<int>(len_str2 + 1, 0));
	int cost = 0;
	int value = 0;
	for (int i = 0; i <= len_str1; i++)
		cost_table[i][0] = i;
	for (int i = 0; i <= len_str2; i++)
		cost_table[0][i] = i;
	for (int i = 1; i <= len_str1; i++)
		for (int j = 1; j <= len_str2; j++)
		{
			if (str1[i-1] == str2[j-1])
				cost = 0;
			else
				cost = 1;
			value = cost_table[i-1][j] + 1 < cost_table[i][j - 1] + 1 ? cost_table[i - 1][j] + 1 : cost_table[i][j - 1] + 1; 
			value = cost_table[i - 1][j - 1] + cost < value ? cost_table[i - 1][j - 1] + cost : value;
			cost_table[i][j] = value;
		}
	return cost_table[len_str1][len_str2];
}
