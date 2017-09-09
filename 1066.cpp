#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int M,N,a,b,n;
    cin >>M>>N;
    cin >>a>>b;
    cin >>n;
    int image[M][N];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> image[i][j];
            if(image[i][j]>=a&&image[i][j]<=b)
            {
                image[i][j]=n;
            }
        }
    }
        for(int s=0;s<M;s++)
    {

        for(int t=0;t<N;t++)
        {
           printf("%03d",image[s][t]);
           if(t!=N-1) cout<<" ";

            }
            if(s!=M-1){
                cout <<endl;
            }

    }
    return 0;


}
