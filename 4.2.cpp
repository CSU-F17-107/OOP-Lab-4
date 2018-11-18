#include<iostream>
using namespace std;
void login(string,string);
int main()
{
string passward,name;
cout<<"enter username"<<endl;
cin>>name;
cout<<"enter passward"<<endl;
cin>>passward;
login(name,passward);
}
void login(string name, string passward)
{
string a="abcd";
string b="pakistan";
if(name==a)
{
if(passward==b)
cout<<"login is succesful";
else
cout<<"forgotten passward?? log in failed";
}
else
cout<<"invalid username log in failed";
}
