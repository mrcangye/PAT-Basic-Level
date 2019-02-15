#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

bool issu(int n)
{
	int t=2;
		if(n<2){
		return false;
	}
	while(t<=sqrt(n)+0.5)
	{
		if(n % t==0)
			return false;
			t++;
	 } 
	 
	 return true;
}

int main()
{
	int L,K;
	scanf("%d %d",&L,&K);
	char num[1010];
	char c,i=0;
	scanf("%s",num);
	bool flag =0;
	for(int i=0;i+K<=L;i++)
	{
		int number=0,cout=1;
		for(int j=i+K-1;j>=i;j--)
		{
			number = number + (num[j]-'0')*cout;
			cout = cout *10;	
		}
		//printf("\n%d\n",number);
		if(number==1||number==0)
		{
			flag=0;
			break;
		}
		if(issu(number))
		{
			printf("%0*d",K,number);
			flag =1;
			break;
		}

	}

	if(flag==0)
	{
		printf("404");
	}
	return 0;
 } 
