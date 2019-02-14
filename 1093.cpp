#include <iostream>
using namespace std;
int main(){
	int a[128]={0};
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	s3=s1+s2;
	for(int i=0;i<s3.length()  ;i++){
		if(a[s3[i]]==0){
			cout<<s3[i];9
			a[s3[i]]++;
		}
	}
	return 0;
}
