#include <iostream>
#include <string>
#include "Account.h"
using namespace std;
void Account::setAccountNo(string ano) {
	AccountNo = ano;
}
void Account::setAccountPassword(string pas) {
	AccountPassword = pas;
}
void Account::setActive(bool act) {
	Active = act;
}
string Account::getAccountNo() {
	return AccountNo;
}
string Account::getAccountPassword() {
	return AccountPassword;
}
bool Account::getActive() {
	return Active;
}