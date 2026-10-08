#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double b,d;
    int c;
    cin>>b;
    c=int(b/30.48);
    d=fmod(b,30.48)/2.54;
    cout<<c<<endl;
    cout<<fixed<<setprecision(2)<<d<<endl;
    return 0;
}