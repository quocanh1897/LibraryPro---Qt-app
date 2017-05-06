#include <iostream>
#include <string>
#include "Account.h"
using namespace std;
void Account::setAccountID(string ano) {
	AccountID = ano;
}
void Account::setAccountPassword(string pas) {
	AccountPassword = pas;
}
void Account::setActive(bool act) {
	Active = act;
}
string Account::getAccountID() {
	return AccountID;
}
string Account::getAccountPassword() {
	return AccountPassword;
}
bool Account::getActive() {
	return Active;
}