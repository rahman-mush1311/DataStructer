#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    long long int n,sum,num,rem;

    for(int i=0; i<t; i++)
    {
        cin >> num;
        n=num;
        sum=0;

        while(true)
        {
            sum=0;

            while(true)
            {

                rem=n%10;
                n/=10;
                sum+=rem*rem;

                if(n==0)
                {
                    n=sum;
                    break;
                }
            }
            if(n<=9)
                break;
           else
               n=sum;

        }

       // cout << sum << endl;

        if(n==1 || n==7)
            printf("Case #%d: %lld is a Happy number.\n",i+1,num);
        else
            printf("Case #%d: %lld is an Unhappy number.\n",i+1,num);
    }

}
