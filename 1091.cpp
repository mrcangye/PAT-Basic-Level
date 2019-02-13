#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int M,K;
	scanf("%d",&M);
	while(M>0)
	{
		scanf("%d",&K);
		int N=1;
		int flag = 0;
		int t = K;
		double wei=0;
		while(t)
		{
			 t=t/10;
			 wei++;
		}
	//	cout<< wei<<endl;
		while(N<=9)
		{
			long long temp = K*K*N;
			if(((temp)%int((pow(10.0,wei))))==K)
			{
				printf("%d %ld",N,temp);
				if(M!=1)
				{
					printf("\n");
				}
				flag=1;
				break;
			}
			else
			{
				N++;
			}
		}
		if(flag==0)
		{
			printf("No");
			if(M!=1)
				{
					printf("\n");
				}
		}
		M--;
	}
	return 0;
}

