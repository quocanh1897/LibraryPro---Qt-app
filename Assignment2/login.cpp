#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include"Account.h"
using namespace std;
void login(string &acc, string &pass, bool &reader, bool &librarian, bool &admin) {
	string str;
	
LOGIN:
	cout << "ACCOUNT NAME: ";
	cin >> acc;
	cout << "PASSWORD:  ";
	cin >> pass;
	fstream f;
	f.open("account.txt");
	while (!f.eof()) {
		stringstream ss;
		getline(f, str);
		ss << str;
		string u, p;
		ss >> u >> p >> reader >> librarian >> admin;
		if (u == acc&&p == pass) goto SUCCESS;
		ss.clear();
	}
	cout << "Wrong accountname or password," << endl;
	goto LOGIN;
SUCCESS:
	cout << "Log in successfully" << endl << endl << endl;
	f.close();
	cout << "         [P]revious page||[S]tart page" << endl;
	char choice;
	cin >> choice;
	/*system("cls");
	if (admin == 1) cout << "Admin ";
	if (reader == 1) cout << "Reader ";
	if (librarian == 1) cout << "Librarian ";
	getchar(); getchar();*/
}
Account::Account(){
	reader; librarian; admin;
	AccountName;
	AccountPassword;
	UserID;
}
int main() {
	 
	//bool  reader, librarian, admin;
	string acc, pass;
	cout << "----------------------------------------------------------------" << endl
		 << "----------------------------LOG IN------------------------------" << endl
		 << "----------------------------------------------------------------" << endl << endl << endl;
	login(AccountName, pass, reader, librarian, admin);
	
	cout << acc << pass << reader << librarian << admin;
	getchar(); getchar();
}