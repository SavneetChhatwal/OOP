#include<iostream>
using namespace std;
class test{
	int x;
	public:
		test(int a){
			x = a;
		}
		test operator ++();
		void display();
};
test test::operator ++(){
	x = x + 8;
}
void test::display(){
	cout<<"A = "<<x<<endl;
}
int main(){
	test t(4);
	t.display();
	++t;
	t.display();
	return 0;
}
