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
         int n,x,y;
         sieve();

         while(scanf("%d",&n)!=EOF)
         {
           x=n;
           y=0;
           while(x!=0)
           {
                y=y*10;
                y=y+(x%10);
                x=x/10;
           }
          if(n!=y)
          {
           if(mark[n]==0 && mark[y]==0)
            printf("%d is emirp.\n",n);
           else if(mark[n]==0 && mark[y]==1)
            printf("%d is prime.\n",n);
           else
            printf("%d is not prime.\n",n);
          }
          else
          {
            if(mark[n]==0)
                printf("%d is prime.\n",n);
            else
                printf("%d is not prime.\n",n);
          }
         }
         return 0;
        }

