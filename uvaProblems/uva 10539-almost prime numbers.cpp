#include<bits/stdc++.h>

#define SIZE 1000002

int status[SIZE],nprime;
int mark[1000002];

using namespace std;

int main()
{
         int i,j,x,y,f=0;
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

        cin >> x >> y;

        for(int k=0; k<50; k++ )
        {
            if(x == status[k] && y==status[k+1])
            {
                f=1;
                break;
            }
            else
                f=0;
        }

        if(f==1)
            printf("YES\n");
        else
            printf("NO\n");

return 0;
}

