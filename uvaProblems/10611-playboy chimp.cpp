#include<bits/stdc++.h>

using namespace std;

int heights[50001];

/*void binarySearch(int n,int key)
{
    int low=0,high=n-1,mid;

    while(!low>high)
    {
        mid=(high+low)/2;

        if(heights[mid]==key)
        {
            for(int i=mid-1;i>-1;i--)
            {
                if(heights[i]!=mid)
                {
                    lower=heights[i];
                    break;
                }
                else
                {
                    lower=0;
                }
            }
            for(int i=mid+1;i<n;i++)
            {
                if(heights[i]!=mid)
                {
                    upper=heights[i];
                    return;
                }
                else
                {
                    upper=0;
                }
            }
        }
        else if(key>heights[mid])
            low=mid+1;
        else
            high=mid-1;

    }
}
*/
int main()
{
    int n,m,query,upper=-1,lower=-1;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>heights[i];
    }

    cin>>m;
    while(m--)
    {
        cin >> query;
        // binarySearch(n,query);
        lower=-1;
        for(int i=0; i<n; i++)
        {
            if(query>heights[i])
            {
                lower=heights[i];
            }
            else
                break;
        }

        if(lower!=-1)
            printf("%d",lower);
        else
            printf("X");

        upper=-1;
        for(int j=n-1; j>=0; j--)
        {
            if(query<heights[j])
                upper=heights[j];
            else
                break;
        }
        if(upper!=-1)
            printf(" %d\n",upper);
        else
            printf(" X\n");
    }


}
