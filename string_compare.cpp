#include <iostream>
#include <cstring>
using namespace std;

class str{
	string nam1, nam2;
	public:
		void getString();
		void Compare();
};

void str::getString(){
	cout << "\nEnter string 1: ";	cin >> nam1;
	cout << "\nEnter string 2: ";	cin >> nam2;
}

void str::Compare(){
	if(nam1.compare(nam2) == 0)
		cout << "\nStrings are equal";
	else
		cout << "\nStrings are not equal";
}

int main(){
	str S;
	S.getString();
	S.Compare();
	return 0;
}
