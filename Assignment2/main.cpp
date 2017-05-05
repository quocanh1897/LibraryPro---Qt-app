#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main() {
	string str, username, pass;
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
		ss >> u >> p;
		if (u == username&&p == pass) goto SUCCESS;
		ss.clear();
	}
	cout << "Wrong username or password," << endl;
	goto LOGIN;
SUCCESS:
	cout << "Log in successfully" << endl;
	f.close();
	cout << "Press R to (R)eturn to the previous page" << endl
		<< "Press S to go to (S)tart page" << endl;
	char choice;
	cin >> choice;
}