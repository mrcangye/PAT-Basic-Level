#include<iostream>
#include<math.h>
using namespace std;
const int CLK_TCK=100;
int main()
{

    double C1,C2;
    cin>>C1>>C2;
    int time=floor((C2-C1)/CLK_TCK+0.5);
    int hour=0,minute=0,second=0;
    hour=time/3600;
    minute=time/60%60;
    second=time%60;
    if(hour<10)
    cout<<"0"<<hour<<":";
    else    cout<<hour<<":";
    if(minute<10)
    cout<<"0"<<minute<<":";
    else    cout<<minute<<":";
    if(second<10)
    cout<<"0"<<second<<endl;
    else    cout<<second<<endl;
    return 0;
}

