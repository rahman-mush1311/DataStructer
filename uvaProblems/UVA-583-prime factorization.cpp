#include<bits/stdc++.h>
#define SIZE 1000002
using namespace std;


int nprime;int status[SIZE];
int mark[SIZE];

void seieve()
{
    int i,j;
    for(int i=4; i<=SIZE; i+=2)
        mark[i]=1;
    status[nprime++]=2;

    for(int i=3; i*i<=SIZE; i+=2)
    {
        if(!mark[i])
        {
            status[nprime++]=i;
            for(j=i*i; j<=SIZE; j+=(2*i))
                mark[j]=1;
        }
    }
}

int main()
{
    int n;
    seieve();
    while(cin >> n && n)
    {
        if(n<0)
        {
            printf("%d = -1 * ",n);
            n=n*(-1);
        }

        else
        {
            printf("%d = ",n);
        }


            for(int i=2; i*i<=n; i++)
            {
                while(n%i==0)
                {
                    printf("%d * ",i);
                    n/=i;
                }
            }
        printf("%d\n",n);
    }
return 0;
}
