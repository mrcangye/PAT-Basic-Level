#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int N;
    int t1=0;
    int temp;
    int step;
    cin >>N>>step;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    step=N-step%N;
    for(int n=step;n<N;n++)
    {
       printf("%d",a[n]);
       if(n!=N)
       {
           printf(" ");
       }

    }
    for(int m=0;m<step;m++)
    {

    printf("%d",a[m]);
          if(m!=step-1)
       {
           printf(" ");
       }




    }

  return 0;
}
