#ifndef _ROLE_MAP_
#define _ROLE_MAP_
#include <string>
using namespace std;
class AccountRoleMap {
private:
	string AccountID;
	string RoleID;
public:
	void setAccountID(string acn);
	void setRoleID(string ID);
	string getAccountID();
	string getRoleID();
};
#endif