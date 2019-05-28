#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,s1,s2,l,q;

    vector< int > x;
    vector< int > y;
    vector <int> :: iterator it;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin >> n >> l;
        s1=0;
        s2=0;

        for(int j=0; j<n; j++)
        {
            cin>> q;
            x.push_back(q);
        }

         for(int j=0; j<n; j++)
        {
            cin>>q;
            s2+=q;
        }

         while(!x.empty())
        {
            s1+=x.back();
            x.pop_back();
        }
        if(s1<=l)
        {

        if(s2>l)
        {
        if(s2%n==0 )

                printf("Case %d: Yes\n",i+1);
        }

            else

                printf("Case %d: No\n",i+1);
        }

        else

            printf("Case %d: No\n",i+1);


    }
    return 0;
}
