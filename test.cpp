#include<iostream>
using namespace std;
int main()
{
    float v0=(40/3.6),a=0.15;
    int t=120;
    float  vt,s;
    vt=v0+a*t;
    s=v0*t+0.5*a*t*t;
    cout<<"vt="<<vt<<" s="<<s<<endl;
    return 0;
}