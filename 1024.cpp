#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char num[10000];
	scanf("%s",num);
	int i;
	int len=strlen(num);
	if(num[0]=='-') 
	printf("-");
	for(i=3;num[i]!='E';i++);
	int cout = 1,number=0;
	for(int j=len-1;j>i+1;j--)
		{
			number = number + (num[j]-'0')*cout;
			cout = cout *10; 
		}
//	printf("%d\n",number);²âÊÔnumberÕýÈ·

if(num[i+1]=='+')
{
	printf("%c",num[1]);
	
	if((i-3)>number){
	
	for(int j=3;j<3+number;j++)
	{
		printf("%c",num[j]);
	}
	printf(".");
	for(int t=3+number;t<i;t++)
	{
		printf("%c",num[t]);
	}
}

	if((i-3)<=number)
	{
		for(int j=3;j<i;j++)
		{
			printf("%c",num[j]);
		}
		if((i-3<number)){
			
			for(int j=0;j<number-i+3;j++)
		{
			printf("0");
		}
		}
	}
}
if(num[i+1]=='-')		
	{
		printf("0.");
		for(int j=0;j<number-1;j++)
		{
			printf("0");
		}
		printf("%c",num[1]);
		for(int j=3;j<i;j++)
		{
			printf("%c",num[j]);
		}
		}	
	
	return 0;
 } 
