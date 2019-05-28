#include<bits/stdc++.h>

using namespace std;

int main()
{
    map< string, string > mp;
    string s1,s2,s3;
    int t,n;

    cin>> t;
    getchar();
    while(t--)
    {
        getline(cin ,s1);
        getline(cin ,s2);
        mp[s1]= s2;
    }
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin ,s3);
        cout<<mp[s3]<<endl;
    }
return 0;
}
