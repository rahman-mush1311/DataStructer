#include<stdio.h>
long long int fibo[100];

void f()
{
    long long int i;
    fibo[0]=1;
    fibo[1]=2;
    for(i=2; i<=55; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}
int main()
{
    f();
    long long int n;

    while(scanf("%lld",&n))
    {
        if(n<0)break;
        printf("%lld %lld\n", fibo[n]-1, fibo[n+1]-1);
    }
    return 0;
}
