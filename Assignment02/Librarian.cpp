#include <cstddef>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "ImplementRole.h"
using namespace std;
void Librarian::loadBooks() {
	Book.clear();
	ifstream input;
	string str, str1, str2;
	input.open("book.txt", ios::app);
	while (getline(input, str)) {
		size_t pos = str.find_first_of(";");
		size_t last = str.find_first_of(";", pos + 1);
		str1 = str.substr(pos + 1, last - 2);
		str2 = str.substr(last + 1);
		Book.push_back({ str1,str2 });
	}
	input.close();
}
void Librarian::saveBooks() {
	ofstream output;
	output.open("book.txt", ios::out);
	for (size_t i = 0;i < Book.size();i++) {
		output << i << ";" <<setw(50)<< Book[i].TitleBook << ";" <<setw(50)<< Book[i].BookDescr << endl;
	}
	output.close();
}
void Librarian::addBook() {
	screenAddBook();
	char option;
	cin >> option;
	loadBooks();
	while (true) {
		if (option == 'A') {
			char descr[250];
			char title[100];
			cout << "Type the title of book:\n";
			cin.ignore();
			cin.getline(title, 100);
			cout << "Type the description of the book:\n";
			cin.getline(descr, 250);
			Book.push_back({ title,descr });
			system("cls");
			screenAddBook();
			cout << "Type choice:\n";
			cin >> option;
			if (option == 'B') {
				saveBooks();
				break;
			}
		}
		else if (option == 'C') {
			break;
		}
		else {
			if (option == 'B') {
				cout << "Dont have any change before save";
			}
			cout << "Press again:\n";
			cin >> option;
			cin.ignore();
		}
	}
}
void Librarian::editBook() {
	screenEditBook();
	char option;
	char title[100];
	char descr[250];
	size_t sd = 0;
	cin >> option;
	cin.ignore();
	loadBooks();
	while (true) {
		if (option == 'A') {
			system("cls");
			screenEditBook();
			cout << "Input ID of the book: ";
			cin >> sd;
			while (!cin.good()) {
				cout << "Press again";
				cin >> sd;
			}
			if (sd > Book.size()) {
				cout << "Error inputed incorect ID";
				break;
			}
			cout << "The new title is:\n";
			cin.ignore();
			cin.getline(title, 100);
			cout << "The new description is:\n";
			cin.getline(descr, 250);
			cout << "Type choice:\n";
			cin >> option;
			if (option == 'B') {
				Book.erase(Book.begin() + sd);
				Book.insert(Book.begin() + sd, { title,descr });
				saveBooks();
				break;
			}
		}
		else if (option == 'C') {
			break;
		}
		else
			if (option == 'B') {
				cout << "Dont have any change before save\n";
			}
		cout << "Press again:\n";
		cin >> option;
		cin.ignore();
	}
}


void Librarian::deleteBook() {
	screenDeleteBook();
	char option;
	size_t sd = 0;
	cin >> option;
	loadBooks();
	while (true) {
		if (option == 'A') {
			system("cls");
			screenDeleteBook();
			cout << "Input ID of the book: ";
			cin >> sd;
			if (sd > Book.size()) {
				cout << "Error inputed incorect ID" << endl;
				break;
			}

			Book.erase(Book.begin() + sd);
			cout << "Type choice:\n";
			cin >> option;
			if (option == 'B') {
				saveBooks();
				break;
			}
		}
		else if (option == 'C') {
			break;
		}
		else {
			if (option == 'B') {
				cout << "Dont have any change before save";
			}
			cout << "Press again:\n";
			cin >> option;
			cin.ignore();
		}
	}
}
//
unsigned int Librarian::LevenshteinDistance(string s, string t) {
	size_t len_s = s.length();
	size_t len_t = t.length();
	vector <vector<int>> d(len_s + 1, vector<int>(len_t + 1, 0));
	for (size_t i = 1; i - 1 < len_s;i++) {
		d[i][0] = i;
	}
	for (size_t j = 1; j - 1 < len_t; j++) {
		d[0][j] = j;
	}
	int Cost = 0;
	for (size_t i = 1; i - 1< len_s; i++)
		for (size_t j = 1; j - 1 < len_t;j++) {
			if (s[i] == t[j]) { Cost = 0; }
			else { Cost = 1; }
			d[i][j] = min(min(d[i - 1][j] + 1, d[i][j - 1] + 1), d[i - 1][j - 1] + Cost);
		}
	return d[len_s][len_t];
}
//
void Librarian::findBook() {
	system("cls");
	//
	book_1 *Sort = new book_1[100];
	ifstream input;
	string str,str1,str2;
	size_t sum = 0;
	input.open("book.txt", ios::app);
	while (getline(input, str)) {
		size_t pos = str.find_first_of(";");
		size_t last = str.find_first_of(";",pos+1);
		str1 = str.substr(0, last);
		str2 = str.substr(0, pos) + ";" + str.substr(last + 1);
		Sort[sum++].content = str1;
		Sort[sum++].content = str2;
	}
	input.close();
	//
	string s;
	cin.ignore();
	cout << "\tType word similiar to the book: ";
	getline(cin, s);
	cout << "\tList book result:\n\n";
	cout << "\tID;Title-Description of book"<<endl;
	cout << "\t-------------------------------------------------------\n";
	for (size_t i = 0;i < sum;i++) {
		Sort[i].cost = (float)LevenshteinDistance(s, Sort[i].content);
	}
	std::sort(Sort, Sort + sum, [](book_1 const &a,book_1  const &b) { return a.cost < b.cost; });
	for (size_t i = 0;i < 3;i++) {
		std::cout <<"\t"<< Sort[i].content << endl;
	}
	delete[] Sort;
}