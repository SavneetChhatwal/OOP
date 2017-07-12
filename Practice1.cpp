#include<iostream>
using namespace std;
class person{
	protected:
		char name[20];
		char address[20];
		int age;
};
class stu:public person{
	int r;
	int marks;
	public:
		void display();
		void getdata();
};
class emp:public person{
	int pid;
	float salary;
	public:
		void display();
		void getdata();
};
void stu::getdata(){
	cout<<"\nEnter the person name: ";
	cin>>name;
	cout<<"\nEnter the address: ";
	cin>>address;
	cout<<"\nEnter age: ";
	cin>>age;
	cout<<"\nEnter roll no: ";
	cin>>r;
	cout<<"\nEnter marks: ";
	cin>>marks;
}
void emp::getdata(){
	cout<<"\nEnter the personal ID: ";
	cin>>pid;
	cout<<"\nEnter salary: ";
	cin>>salary;
}
void stu::display(){
	cout<<"\nName: "<<name<<"\nAddress: "<<"\nAge: "<<age<<"\nRoll no: "<<r<<"\nMarks: "<<marks;
}
void emp::display(){
	cout<<"\nPersonal ID: "<<pid<<"\nSalary: "<<salary;
}
int main(){
	stu s;
	emp e;
	s.getdata();
	e.getdata();
	s.display();
	e.display();
	return 0;
}
