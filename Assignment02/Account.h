#ifndef _ACCOUNT
#define _ACCOUNT
#include <string>
using namespace std;
class Account {
private:
	bool Active;
	string AccountNo;
	string AccountPassword;
	string UserNo;
public:
	void setAccountNo(string ano);
	void setAccountPassword(string pas);
	void setActive(bool act);
	string getAccountNo();
	string getAccountPassword();
	bool getActive();
};

#endif