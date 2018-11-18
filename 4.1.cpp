#include<iostream>
using namespace std;
int maximum(int a, int b);
int main()
{
int a,b;
cout<<"enter values to compare";
cin>>a;
cout<<"enter value of b";
cin>>b;
cout<<"maximum value is"<<maximum(a,b);
}
int maximum(int a, int b)
{
int maximum=a;
if (b>maximum)
maximum=b;

return maximum;
}



