#include <iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int sum=0,N;
    cin >> N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int s=0;s<N;s++)
    {

        for(int t=s+1;t<N;t++)
        {
            sum = sum+a[s]*10+a[t]+a[t]*10+a[s];

        }
    }


    cout << sum;
    return 0;
}
