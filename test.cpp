#include<iostream>
using namespace std;
int main()
{
    short a,b;
    double c;
    a=b=3;
    cout<<a<<""<<b<<endl;
    b=b+5;
    cout<<a<<""<<b<<endl;
    a+=b;
    cout<<a<<""<<b<<endl;
    c=a/b;
    cout<<"c="<<c<<endl;
    c=(double)a/b;
    cout<<"c="<<c<<endl;
    return 0;
}