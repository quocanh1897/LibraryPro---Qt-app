#include "ImplementRole.h"
#include <iostream>
using namespace std;
void screenAddBook()
{
	cout << "\t+==============================================================+\n";
	cout << "\t|=========> Press A for continue adding book       <===========|\n";
	cout << "\t|=========> Press B for confirm save list book     <===========|\n";
	cout << "\t|=========> Press C for cancel processing add book <===========|\n";
	cout << "\t+==============================================================+\n";
}

void screenEditBook()
{
	cout << "\t+==============================================================+\n";
	cout << "\t|=======> Press A for get ID of book need edit     <===========|\n";
	cout << "\t|=======> Press B for permit saving the book       <===========|\n";
	cout << "\t|=======> Press C for cancel processing edit book  <===========|\n";
	cout << "\t+==============================================================+\n";
}

void screenDeleteBook()
{
	cout << "\t+==============================================================+\n";
	cout << "\t|=======> Press A for get ID of book need delete     <=========|\n";
	cout << "\t|=======> Press B for permit saving the result       <=========|\n";
	cout << "\t|=======> Press C for cancel processing delete book  <=========|\n";
	cout << "\t+==============================================================+\n";
}
