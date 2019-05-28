#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair <int,int > v[100000];
    pair <int,int > x[100000];

    int t;
    cin >> t;
    int y;
    cin >> y;

    int n=0;
    int ans;

    while(t--)
    {
        while(true)
        {
            cin >> v[n].first >> v[n].second;
            if(v[n].second == 0 && v[n].first==0)
                break;
                n++;
        }
        sort(v,v+n);

        for(int i=0; i<n; i++)
        {
            if(v[i].second<y && v[i].first>=0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
return 0;
}
