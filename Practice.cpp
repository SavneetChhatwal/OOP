#include<iostream>
using namespace std;
class complex{
	int re, img;
	public:
		void input();
		void calculate(complex, complex);
		void display();
};
void complex::input(){
	cout<<"\nEnter the real part: ";
	cin>>re;
	cout<<"\nEnter the imaginary part: ";
	cin>>img;
}
void complex::calculate(complex c1, complex c2){
	re = c1.re + c2.re;
	img = c1.img + c2.img;
}
void complex::display(){
	cout<<"\nThe result complex number is "<<re<<" + i"<<img<<endl;
}
int main(){
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c3.calculate(c1, c2);
	c3.display();
	return 0;
}
