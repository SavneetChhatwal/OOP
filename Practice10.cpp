#include<iostream>
using namespace std;
class B{
	public:
		void display(){
			cout<<"\nI'm base class";
		}
};
class D:public B{
	public:
		void display(){
			cout<<"\nI'm derived class";
		}
};
int main(){
//	B b;
	B *bptr;
//	bptr->display();
	D d;
	bptr = &d;
//	D *dptr;
	((D* )bptr)->display();
}
