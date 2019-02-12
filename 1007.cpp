#include<cstdio>
#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int t1[N+1]={1};
    int t2[N];
    for(int i=0;i<N;i=i+2)
    {
        t1[i]=0;
    }
    for(int j=3;j<=sqrt(N);j+=2)
    {

         if(t1[j])
          for( int m=j+j; m<=N; m+=j )
            t1[m]=0;
    }
    for(interestingk=0;k<=N;k++)
    {

        if(t1[k]==1)
        {
            cout << t1[k];
        }
    }

	return 0;
}
