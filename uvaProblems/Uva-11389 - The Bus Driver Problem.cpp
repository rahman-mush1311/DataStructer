#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,d,r,sum,y;
    int m[120],e[120];

    while(scanf("%d%d%d",&n,&d,&r)!=EOF)
    {
        if(n==0 && d==0 && r==0)
            break;
        y=0;

        for(i=0;i<n;i++)
            scanf("%d",&m[i]);

        sort(m,m+n);

        for(i=0;i<n;i++)
            scanf("%d",&e[i]);

        sort(e,e+n);

        for(i=0;i<n;i++)
        {
            j=m[i]+e[n-1-i];

            if(j>d)
            y=y+(j-d);
        }
        printf("%d\n",y*r);
    }
return 0;
}
