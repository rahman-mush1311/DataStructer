#include <stdio.h>

#define SIZE 1000002

int status[SIZE],nprime;
int mark[1000002];

void sieve()
{
         int i,j;
         for(i=4;i<=SIZE;i+=2)
            mark[i]=1;

         status[nprime++]=2;

         for(i=3;i*i<=SIZE;i+=2)
         {
             if(!mark[i])
             {
                 status[nprime++]=i;
                 for(j=i*i;j<=SIZE;j+=(2*i))
                    mark[j]=1;
             }
         }
}
int main()
{
    int i,a,b,x,n;
    double y,c;
    sieve();

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        c=0.00;
        n=b-a+1.00;
        for(i=a;i<=b;i++)
        {
            x=(i*i)+i+41;
            if(mark[x]==0)
                c++;
        }
          y=(c/n)*100.00;
        printf("%.2lf\n",y);
    }
return 0;
}
