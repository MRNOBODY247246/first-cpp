#include<iostream>
using namespace std;
int main()
{
    int n1,n2=5;
    n2++;
    cout<<"n2="<<n2<<endl;
    ++n2;
    cout<<"n2="<<n2<<endl;
    n1=n2++;
    cout<<"n1="<<n1<<" n2="<<n2<<endl;
    n1=++n2;
    cout<<"n1="<<n1<<" n2="<<n2<<endl;
    return 0;
}