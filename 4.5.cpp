#include<iostream>
using namespace std;
struct student
{
	char name[10];
	char roll[10];
	char depart[10];
	char sec[5];
};
student b;
void student()
{
	cout<<"Enter Student Name ";
	cin>>b.name;
	cout<<"Enter Roll No ";
	cin>>b.roll;
	cout<<"Enter Department";
	cin>>b.depart;
	cout<<"Enter Section";
	cin>>b.sec;
}
void showstudent()
{
	cout<<"Student Name "<<b.name<<endl;
	cout<<"Roll No  "<<b.roll<<endl;
	cout<<"Department "<<b.depart<<endl;
	cout<<"Section "<<b.sec<<endl;
}
void showstudent2()
{
	showstudent();
}
int main()
{
	student();
	showstudent();
	showstudent2();
}
