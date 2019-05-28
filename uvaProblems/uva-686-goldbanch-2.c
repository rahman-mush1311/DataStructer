
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
         int n,a,b,i,c;
         sieve();
         while(scanf("%d",&n)&&n){
            c=0;
      for(i=2;i<=(n/2);i++)
      {
          a=i;
          b=n-i;
          if(mark[a]==0 && mark[b]==0){
            if(n == a+b){
            c++;
            }
          }
        }
        printf("%d\n",c);
    }
         return 0;
        }
