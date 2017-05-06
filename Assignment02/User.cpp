#include <string>
#include <iostream>
#include <vector>
#include "User.h"
using namespace std;
void User::setUserName(string name) {
	UserName = name;
}
void User::setUserID(string no) {
	UserID = no;
}
void User::setIdentityCard(string icard) {
	IdentityCard = icard;
}
void User::setBirth(string date, string month, string year) {
	DateOfBirth = date;
	MonthOfBirth = month;
	YearOfBirth = year;
}
void User::setUserJob(string job) {
	UserJob = job;
}
void User::setEmailAddress(string email) {
	EmailAddress = email;
}
string User::getUserName() {
	return UserName;
}
string User::getUserID() {
	return UserID;
}
string User::getIdentityCard() {
	return IdentityCard;
}
string User::getBirth() {
	return MonthOfBirth + "/" + DateOfBirth + "/" + YearOfBirth;
}
string User::getUserJob() {
	return UserJob;
}
string User::getEmailAddress() {
	return EmailAddress;
}