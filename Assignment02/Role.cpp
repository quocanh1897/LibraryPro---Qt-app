#include <iostream>
#include <string>
#include "Role.h"
using namespace std;
void Role::setRoleID(string id) {
	RoleID = id;
}
void Role::setRoleDesc(string de) {
	RoleDesc = de;
}
string Role::getRoleID() {
	return RoleID;
}
string Role::getRoleDesc() {
	return RoleDesc;
}