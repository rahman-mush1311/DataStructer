#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

long long int mod(int b,int p)
{
    if(p==0)
        return 1;

    else if(p%2==0)
    {
        long long int p1=mod(b,p/2);
        return (p1*p1)%m;
    }
    else
    {   long long int p1=b%m;
        long long int p2=mod(b,p-1);
        return (p1*p2)%m;
    }

}

int main()
{
    long long int i,t,n,sum,b;
    cin>>t;

    for(i=1;i<=t;i++)
    {
    cin>>n;
    b=2;
    sum=mod(b,n-1);
    sum=((sum%m)*(n%m))%m;
    cout<<"Case #"<<i<<":"<<" "<<sum<<endl;
    }
    return 0;

}
