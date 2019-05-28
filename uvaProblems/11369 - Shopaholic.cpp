#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,sum;


    cin >> t;

    while(t--)
    {
        cin >> n;
        sum = 0;
        vector < int > v(n);


        for(int i=0; i<n; i++)
            cin >> v[i];

        sort(v.begin(),v.end());

        /*for(int i=0; i<n; i++)
            cout << v[i] << ' ';*/

        for(int i=n-3; i>=0; i-=3)
            sum = sum+v[i];

        cout << sum << endl;
    }

return 0;
}
