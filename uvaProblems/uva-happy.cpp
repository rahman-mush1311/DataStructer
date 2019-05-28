#include<bits/stdc++.h>
using namespace std;

/*long long int kisu (long long int N);

long long int kisu (long long int N)
{
    long long int div,rem,sum,b;
    int i,a,c;
    sum = 0;
    div = 0;


      while(N != 0)
    {

        rem = N%10;
        N = N/10;

       // N = div;
        div = rem*rem;
        sum = sum + div;

        cout << sum << endl;
    }
    return sum;
}


int main()
{
    long long int N,div,rem,sum,take=11,b;
    int i,a,c;

    scanf("%d",&a);

    //b = N;

    for(i=0; i<a; i++)
    {
        scanf("%lld",&N);

        b = N*N;
        take=11;

        while(take>=10)
        {
            take = kisu(b);
            b = take;
            cout << take << endl;
        }
    if (N==7 || N==1)
        printf("Case %d: Happy Number\n",i+1);

     else if(take == 1)
        printf("Case #%d %d is a Happy Number \n",i+1,N);

      else
        printf("Case #%d %d is an Unhappy Number\n",i+1,N);


    }*/
#include<stdio.h>
int main()
{
    long long i,j,k,d,sum,num,t,n;
    while(scanf("%lld",&t)==1)
    {
        for(k=1; k<=t; k++)
        {
            scanf("%lld",&n);
            num=n;
            for(j=1; j!=0; j++)
            {
                sum=0;
                for(i=1; i!=0; i++)
                {
                    d=num%10;
                    num=num/10;
                    sum=sum+d*d;
                    //cout << sum << endl;

                    if(num==0)
                    {
                        num=sum;
                        //cout << sum << " sum1" <<endl;
                        break;
                    }
                }
                if(num<=9)
                    break;
            }
            if(num==1 || num==7)
                printf("Case #%lld: %lld is a Happy number.\n",k,n);
            else
                printf("Case #%lld: %lld is an Unhappy number.\n",k,n);
        }
    }
}



