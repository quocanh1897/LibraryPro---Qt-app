#ifndef _ACCOUNT_
#define _ACCOUNT_
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
	void setAccountName(string acc);
	void setAccountPassword(string pass);
	void setActive();
	void getNotice();
	void setAccount(string acc, string pass, bool reader, bool librarian, bool admin);
	string getAccountName();
	string getAccountPassword();
	//bool getActive();//
	void getProfile();
	void changeAccountPassword(); 
};

#endif