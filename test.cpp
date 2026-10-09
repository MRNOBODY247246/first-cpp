#include<iostream>
using namespace std;
int main()
{
    char guidepost;
    double d,s,k,cost;
    double time,l,totalcost;
    cin>>guidepost;
    cin>>d>>s>>k>>cost;
    time=d/s;
    l=d/k;
    totalcost=l*cost;
    cout<<guidepost<<endl;
    cout<<"time="<<time<<endl;
    cout<<"totalpost="<<totalcost<<endl;
    return 0;
}