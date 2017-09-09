/*Copright ?2017 By MRCANGYE
*Anhui Jianzhu University
*This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License.*/
#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    int a=0,b=0;
    int N;
    char C;
    scanf("%d %c",&N,&C);

    if(N%2!=0)
    {
        a=N/2+1;
        b=N;
    }
    else
    {a=N/2;
    b=N;}
   // cout <<a<<endl;
   // cout <<b<<endl;

    for(int i=0;i<a;i++)
    {
       for(int j=0;j<b;j++)
       {
           if(i==0||i==a-1||j==0||j==b-1)
           {
               cout<<C;
           }
           else cout<<" ";

       }
       if(i!=a-1)
       {
           cout<<endl;
       }
    }
    return 0;
}

