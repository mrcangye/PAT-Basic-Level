#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i,k;
    cin>>k;
    a = k/100;
    b = k%100/10;
    c = k%10;
    for(i=0;i<a;i++)
        cout<<'B';
    for(i=0;i<b;i++)
        cout<<'S';
    for(i=0;i<c;i++)
        cout<<i+1;

    return 0;
}
