#include<bits/stdc++.h>

using namespace std;

int main ()
{
    vector <int> v;
    vector <int> :: iterator it;

    int n,k,x,s,t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>n>>k>>x;

        x=x-1;
        s=0;
        for (int i=1; i<=n; i++)
            v.push_back(i);

        for(int i=1; i<=k; i++)
        {
            v.erase (v.begin()+x);
        }

       /* for(int i=0; i<v.size(); ++i)
        {
            s+=v[i];
        }*/
        while(!v.empty())
        {
            s+=v.back();
            v.pop_back();
        }
        printf("Case %d: ",j+1);
        cout<<s<<endl;
    }

    return 0;
}
