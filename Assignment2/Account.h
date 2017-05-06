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
	void setAccountName(string ano);
	void setAccountPassword(string pas);
	void setActive(bool admin);
	string getAccountName();
	string getAccountPassword();
	//bool getActive();//
};

#endif
