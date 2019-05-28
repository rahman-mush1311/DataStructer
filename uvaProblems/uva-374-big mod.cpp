#include<bits/stdc++.h>

using namespace std;

int mod(int b,int p, int m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        int p1=mod(b,p/2,m);
        return (p1*p1)%m;
    }
    else
    {
        int p1=b%m;
        int p2=mod(b,p-1,m);
        return (p1*p2)%m;
    }

}

int main()
{
    int b,p,m,x;
    while(scanf("%d%d%d",&b,&p,&m)!=EOF){
    x=mod(b,p,m);
    printf("%d\n",x);
    }
    return 0;

}
