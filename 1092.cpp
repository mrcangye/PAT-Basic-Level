#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

	struct yue{
		int xl;
		int zl;
	}yb[1010];
	
bool cmp(yue a,yue b)
{
	if(a.xl!=b.xl)	return a.xl>b.xl;
	else return a.zl<b.zl; 
}
int main()
{
	yue yb[1010]={{.xl=0,.zl=1}};
	int N,M;
	scanf("%d %d",&N,&M);
	int n;
	for(int i=0;i<M;i++)//begin as city
	{
		for(int j=0;j<N;j++)//begin as yb
		{
			yb[j].zl=j;
			scanf("%d",&n);
			yb[j].xl=yb[j].xl+n;

		}
	 } 
	 sort(yb,yb+N,cmp);
	 printf("%d\n%d",yb[0].xl,yb[0].zl+1); 
	 int t=0;
	 //printf(" first is %d , second is %d %d %d %d   end",yb[1].xl,yb[2].xl,yb[3].xl,yb[4].xl,yb[5].xl);
	 while(yb[t].xl==yb[t+1].xl&&t<N-1)
	 {
	 	printf(" ");
	 	printf("%d",yb[t+1].zl+1);
	 	t++;
	 }
	 return 0;
}

