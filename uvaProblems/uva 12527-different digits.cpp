#include<bits/stdc++.h>

using namespace std;

bool isRepeat(int num)
{
    int n=0;
    int arr[10];
    memset(arr,0,sizeof(arr));
    while(num)
    {
        int rem=num%10;
        num/=10;
        arr[n++]=rem;
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        int j=i+1;
        if(arr[i]==arr[j])
            return true;
    }
    return false;
}
int main()
{
    int num1,num2;

    while (scanf("%d%d",&num1,&num2)!=EOF)
    {
        int maxi=0;

        for(int i=num1;i<=num2;i++)
        {
            if(!isRepeat(i))
                maxi++;
        }
        printf("%d\n",maxi);
    }

return 0;
}
