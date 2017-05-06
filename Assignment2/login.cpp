#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void login() {
	string str, username, pass;
	bool admin, reader, librarian;
	cout << "----------------------------------------------------------------" << endl
		<< "----------------------------LOG IN------------------------------" << endl
		<< "----------------------------------------------------------------" << endl << endl << endl;
LOGIN:
	cout << "USER NAME: ";
	cin >> username;
	cout << "PASSWORD:  ";
	cin >> pass;
	fstream f;
	f.open("account.txt");
	while (!f.eof()) {
		stringstream ss;
		getline(f, str);
		ss << str;
		string u, p;
		ss >> u >> p >> admin >> reader >> librarian;
		if (u == username&&p == pass) goto SUCCESS;
		ss.clear();
	}
	cout << "Wrong username or password," << endl;
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
int main() {
	login();
}