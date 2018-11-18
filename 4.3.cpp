#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int c;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	c=a;
	a=b;
	b=c;	
	cout<<"1st number : "<<a<<endl;
	cout<<"2nd number : "<<b<<endl;
}
int main()
{
	int a,b;
	swap(a,b);
}
