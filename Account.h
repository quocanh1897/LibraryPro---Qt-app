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
	void setAccountName(string ano);
	void setAccountPassword(string pas);
	void setActive();
	string getAccountName();
	string getAccountPassword();
	//bool getActive();//
	void getProfile();
	void changeAccountPassword();
};

#endif
