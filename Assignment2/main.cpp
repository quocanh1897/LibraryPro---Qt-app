#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	string str, username, pass;
	cout << "----------------------------------------------------------------" << endl
		<< "----------------------------LOG IN------------------------------" << endl
		<< "----------------------------------------------------------------" << endl << endl << endl;
	cout << "USER NAME: ";
	cin >> username;
	cout << "PASSWORD: ";
	cin >> pass;
	fstream f;
	f.open("account.txt");
	while (!f.eof()) {
		stringstream ss;
		getline(f, str);
		ss << str;

	}
	return 0;
}