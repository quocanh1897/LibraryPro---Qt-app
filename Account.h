#ifndef _ACCOUNT
#define _ACCOUNT
#include <string>
using namespace std;
class Account {
private:
	bool reader, librarian, admin;
	string AccountName;
	string AccountPassword;
	string UserID;
public:
	Account();
	Account(string name, string pass, string id, bool r, bool l, bool a);
	Account createAccount();
	void setAccountName(string ano);
	void setAccountPassword(string pas);
	void setActive();
	string getAccountName();
	string getAccountPassword();
	//bool getActive();//
	void getProfile();
	void changeAccountPassword();
	void getNotice();
	int LevashteinDistance(string str1, string str2);
};

#endif