#include<iostream>
using namespace std;
int main()
{
    cout<<"8000秒=";
    cout<<8000/3600<<"hour";
    cout<<(8000%3600)/60<<"minute";
    cout<<8000%3600%60<<"second"<<endl;
    return 0;
}