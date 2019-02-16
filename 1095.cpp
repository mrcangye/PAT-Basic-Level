#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

struct Student{
	char card[13];
	char clas;
	int room;
	int data;
	int num;
	int grade;
}stu[1010];

bool cmp(Student a,Student b){//按分数非升序输出某个指定级别的考生的成绩,
//对于分数并列的考生，
//按其准考证号的字典序递增输出
	if(a.grade!=b.grade)
	{
		return a.grade>b.grade; 
	}
	else{
		return a.card<b.card;
	}
}


int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	int c1=0;
	while(c1<N)
	{
		scanf("%s",stu[c1].card);
		stu[c1].clas=stu[c1].card[0];
		stu[c1].room=stu[c1].card[3]*100+stu[c1].card[2]*10+stu[c1].card[1];
		stu[c1].data=stu[c1].card[9]*10000+stu[c1].card[8]*10000+stu[c1].card[7]*1000+stu[c1].card[6]*100+stu[c1].card[5]*10+stu[c1].card[4];
		stu[c1].num=stu[c1].card[12]*100+stu[c1].card[11]*10+stu[c1].card[10];
		scanf("%d",&stu[c1].grade);
		c1++;
	}
	//printf("%s",stu[0].card);
	int lei;
	char lei2[6];
	while(M--)
	{
		scanf("%d %s",&lei,lei2);
		if(lei == 1&)
		{	
			sort() 
			
		}
	}
	
	
	
	
	return 0;
	
}
