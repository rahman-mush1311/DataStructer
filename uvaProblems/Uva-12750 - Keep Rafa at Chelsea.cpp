#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t,n,sum,c,f;
    char x;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        f=1;
        sum=0;
        c=0;
        cin>>n;
        while(n--)
        {
           cin>>x;

            if(f == 0)
                continue;

            if(x == 'W')
                c=0;

            else
            {
                c++;
                if(c==3)
                    f=0;
            }
            sum++;
        }

        printf("Case %d: ",i+1);
        if(f==0)
            cout<<sum<<endl;
        else
            cout<<"Yay! Mighty Rafa persists!"<<endl;

    }


return 0;
}
