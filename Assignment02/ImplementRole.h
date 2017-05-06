#ifndef _IMPLEMENTROLE
#define _IMPLEMENTROLE
#include <string>
#include <vector>
using namespace std;
class MemReader{
private:
	string RoleID;
public:
	void findBook();
	void sendBorrowBookRequirement();
	void viewNotice();
	void changePassword();
};
class UserManager {
private:
	string RoleID;
public:
	void addUser();
	void deleteUser();
	void editUser();
	void findUser();
	void createAccount();
	void activeAccount();
	void resetPassword();
	void findAccount();
};
class BookManager {
private:
	struct book {
		string TitleBook;
		string BookDescr;
	};
	struct book_1 {
		string content;
		float cost;
	};
	string RoleID;
	vector <book> Book;
public:
	unsigned int LevenshteinDistance(string s, string t);
	void loadBooks();
	void saveBooks();
	void addBook();
	void editBook();
	void deleteBook();
	void findBook();
	void getUserRequirement();
	void fineUser();
	void solveProblem();
};

	void screenSendBorrowBookRequirement();
	void screenViewNotice();
	void screenChangePassword();

	void screenAddUser();
	void screenDeleteUser();
	void screenEditUser();
	void screenFindUser();
	void screenCreateAccount();
	void screenActiveAccount();
	void screenResetPassword();
	void screenFindAccount();

	void screenAddBook();
	void screenEditBook();
	void screenDeleteBook();
	void screenFindBook();
	void screenGetUserRequirement();
	void screenFineUser();
	void screenSolveProblem();

#endif