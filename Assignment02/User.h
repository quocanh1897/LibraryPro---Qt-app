#ifndef _USER
#define _USER
#include <string>
#include <vector>
#include "Account.h"
using namespace std;
class User {
private:
	string UserName;
	string UserNo;
	string IdentityCard;
	string EmailAddress;
	string DateOfBirth;
	string MonthOfBirth;
	string YearOfBirth;
	string UserJob;
	vector <Account*> account_list;
public:
	void setUserName(string name);
	void setUserNo(string no);
	void setIdentityCard(string icard);
	void setBirth(string date,string month,string year);
	void setUserJob(string job);
	void setEmailAddress(string email);
	string getUserName();
	string getUserNo();
	string getIdentityCard();
	string getBirth();
	string getUserJob();
	string getEmailAddress();
};
#endif