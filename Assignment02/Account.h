#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <string>
using namespace std;
class Account {
private:
	bool Active;
	string AccountID;
	string AccountPassword;
	string UserID;
public:
	void setAccountID(string ano);
	void setAccountPassword(string pas);
	void setActive(bool act);
	string getAccountID();
	string getAccountPassword();
	bool getActive();
};

#endif