#include<iostream>
using namespace std;
int main()
{
    int  m,n,num;
    int t=48;
    char th;
    double dou_1,dou_2,dou_3;
    m=5;n=326;
    num=t/((float)m/n);
    dou_1=(double)(n/m);
    dou_2=n/m;
    dou_3=(double)n/m;
    th=(double)n/m;
    cout<<num<<","<<dou_1<<","<<dou_2<<","<<dou_3
<<","<<th<<endl;
    return 0;
}