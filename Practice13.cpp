#include<iostream>
using namespace std;
class test{
	public:
		int a,b;
		void getData(int x, int y){
			a = x;
			b = y;
		}
		test operator -();
		void display();
};
test test::operator -(){
	a = -a;
	b = -b;
}
void test::display(){
	cout<<a<<endl;
	cout<<b<<endl;
}
int main(){
	test t;
	t.getData(10,-10);
	t.display();
	-t;
	t.display();
	return 0;
}
