#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    map < string , int > mp;
    vector< string > v;
    string ss, s,r;

    cin>>n;
    getchar();

    while(n--)
    {
        cin>> s;
        getline(cin, r);

        if(mp[s])
        {
            mp[s]++;
        }
        else
        {
            v.push_back(s);
            mp[s]++;
        }
    }
    sort(v.begin(),v.end());

    for(int i=0; i!=v.size(); i++)
    {
        cout<< v[i]<<" "<<mp[v[i]]<<endl;
    }
    return 0;

}
