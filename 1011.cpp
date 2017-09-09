#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long a[10],b[10],c[10],x=0;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int j=0;j<x;j++){
        if((a[j]+b[j])>c[j]){

            cout<<"Case #"<<j+1<<": true"<<endl;
        }else{
            cout<<"Case #"<<j+1<<": false"<<endl;
        }
    }
}
