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

}
