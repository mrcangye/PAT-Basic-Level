#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int N;
    int j=1;
    float c=0;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    int sum5=0;
    int t1=0,t2=0,t3=0,t4=0,t5=0;
    cin >> N;
    int a[N];
    int b[1000];
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
        if(a[i]%5==0)
        {

            if(a[i]%2==0)
               {
                   sum1=a[i]+sum1;
                t1++;
               }
        }
        else if(a[i]%5==1)
        {
            j++;
            sum2=sum2+pow(-1,j)*a[i];
            t2++;
        }
        else if(a[i]%5==2)
        {

            sum3++;
            t3++;
        }
        else if (a[i]%5==3)
        {

            sum4=a[i]+sum4;
            c++;
            t4++;
        }
        else if(a[i]%5==4)
        {
            if(a[i]>sum5)
            {

                sum5=a[i];
                t5++;
            }
        }
    }
    if(t1!=0)
        {cout << sum1 <<" ";}
    else
    {
        cout<<"N"<<" ";
    }

        if(t2!=0)
        {cout << sum2 <<" ";}
    else
    {
        cout<<"N"<<" ";
    }

        if(t3!=0)
        {cout << sum3 <<" ";}
    else
    {
        cout<<"N"<<" ";
    }
        if(t4!=0)
        {printf("%.1f ",(float)(sum4/c));}
    else
    {
        cout<<"N"<<" ";
    }
        if(t5!=0)
        {cout << sum5;}
    else
    {
        cout<<"N";
    }


	return 0;
}
