#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char a[10],b[10],A,B;
    int suma=0,sumb=0,i,j,sum;
    scanf("%s",a);

    cin >>A;
    scanf("%s",b);
    cin>>B;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==A)
        {
            suma=suma*10;
            suma=a[i]-'0'+suma;
        }
    }

    for(j=0;b[j]!='\0';j++)
    {
        if(b[j]==B)
        {
            sumb=sumb*10;
            sumb=b[j]-'0'+sumb;
        }
    }
//    cout <<suma<<endl;
//    cout <<sumb;
    cout <<suma+sumb;


 }
