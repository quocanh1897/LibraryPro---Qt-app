#include <iostream>
#include "Account.h"
#include "Role.h"
#include "User.h"
#include "RoleMap.h"
#include "ImplementRole.h"
using namespace std;
int main() {
	Librarian t;
	char c;
	cout << "Press 1 to add Book, Press 2 to find book, Press 3 to delete book, Press 4 to exit" << endl;
	cin >> c;
	while (true) {
		switch (c)
		{
		case '1':
			t.addBook();
			cout << "Press 1 to add Book, Press 2 to find book, Press 3 to delete book, Press 4 to exit" << endl;
			cin >> c;
			break;
		case '2':
			t.findBook();
			cout << "Press 1 to add Book, Press 2 to find book, Press 3 to delete book, Press 4 to exit" << endl;
			cin >> c;
			break;
		case '3':
			t.deleteBook();
			cout << "Press 1 to add Book, Press 2 to find book, Press 3 to delete book, Press 4 to exit" << endl;
			cin >> c;
			break;
		case '4':
			break;
		default:
			cout << "Press again" << endl;
			cin >> c;
			break;
		}
		if (c == '4')
			break;
	}
	return 0;
}