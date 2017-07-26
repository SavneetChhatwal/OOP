#include<iostream>
using namespace std;
class B{
	public:
		virtual void show(){
			cout<<"\nIn show function base class";
		}
		virtual void display(){
			cout<<"\nIn display function 1";
		}
};
class D:public B{
	public:
		void show(){
			cout<<"\nIn show function of derived class";
		}
		void display(){
			cout<<"\nIn display function 2";
		}
};
int main(){
	B *bptr;
	D d;
	B b;
	bptr = &b;
	bptr->show();
	bptr->display();
	bptr = &d;
	bptr->show();
	bptr->display();
	return 0;
}
