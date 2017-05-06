#ifndef _ROLE
#define _ROLE
#include <string>
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
#endif