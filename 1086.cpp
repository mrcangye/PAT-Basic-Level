#include<cstdio>
#include<iostream>
#include<cstring>
//本题陷阱在于不可以输出001，应该输出1。 
using namespace std;
char num[1000000];
int main()
{
	
	int A,B;
	while(scanf("%d %d",&A,&B)==2){
	sprintf(num,"%d",A*B);
	int len;
	len = strlen(num);

	char temp;
	for(int i=0;i<len/2;i++)
	{ 
		temp = num[i];
		num[i] = num[len-i-1];
		num[len-i-1] =temp;
		
	}
	//	printf("%c %c\n",num[0],num[1]);
	int i=0,number=0,cout=1;
while(len>0)
{
	number =number +(num[len-1]-'0')*cout;
	cout=cout*10;
	len--;

}
	printf("%d",number);
		
	};

	return 0;
	
 } 
