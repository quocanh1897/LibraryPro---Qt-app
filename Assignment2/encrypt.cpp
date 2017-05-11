#include <iostream>
#include <string>
using namespace std;

void encrypt (string& s){
	for (int i = 0; i< s.length(); i++)
		s[i]=  (s[i] + 11)%256;
}

int main (){
	string s;
	getline (cin,s);
	cout <<s << endl;
	encrypt (s);
	cout <<s<< endl;
	return 0;
}
