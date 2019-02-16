#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
	int N;
	scanf("%d",&N);
	bool num[20010]={false};
	int cout,shu=0;
	int ci=1;
	while(ci<=N)
	{
		cout=ci/2+ci/3+ci/5;
		if(num[cout]!=true)
		{
			num[cout]=true;
			shu++;
		}
	ci++;
	}
	printf("%d",shu);
 } 
