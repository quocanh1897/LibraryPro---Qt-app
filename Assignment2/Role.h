#ifndef _ROLE_
#define _ROLE_
#include <string>
#include "Account.h"
using namespace std;
class Role {
private:
	string RoleID;
	string RoleDesc;
public:
	void setRoleID(string id);
	void setRoleDesc(string de);
	string getRoleID();
	string getRoleDesc();
};
class Admin :Account {
private:
	string roleID;
public:
	void addAccount(string AccountName);
	void removeAccount(string AccountName);
	bool activeAccount(string AccountName);
};
#endif