#ifndef _ROLEMAP_
#define _ROLEMAP_
#include <string>
using namespace std;
class AccountRoleMap {
private:
	string AccountID;
	string RoleID;
public:
	void getAccountID(string acn);
	void getRoleID(string ID);
	string getAccountID();
	string getRoleID();
};
#endif