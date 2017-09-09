#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char a[1000];
    int b[10]={0},i=0,j=0;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        b[a[i]-'0']++;   
     }
for(j=0;j<10;j++)
{
    if(b[j]!=0) printf("%d:%d\n",j,b[j]);
}
 return 0;
}
