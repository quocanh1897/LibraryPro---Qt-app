#ifndef _ROLEMAP
#define _ROLEMAP
#include <string>
using namespace std;
class AccountRoleMap {
private:
	string AccountNo;
	string RoleID;
public:
	void getAccountNo(string acn);
	void getRoleID(string ID);
	string getAccountNo();
	string getRoleID();
};
#endif