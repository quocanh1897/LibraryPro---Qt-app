#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
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

//void Account::getNotice()
//{
//	ifstream notice;
//	string line;
//	int count = 0;
//	notice.open("Notice.txt");
//	cout << "Cac thong bao hien co :\n";
//	while (notice.eof() == false)
//	{
//		getline(notice,line);
//		if (line.length() > 0)
//		{
//			count++;
//			cout << line << endl;
//		}
//		else
//			continue;
//	}
//	if (count == 0)
//		cout << "Khong co thong bao moi.\n";
//	notice.close();
//	system("pause");
//}