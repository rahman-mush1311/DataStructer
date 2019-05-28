#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,flag=0;

    while(cin >> n && n)
    {

        vector <int > x(n),y(n);

        for(int i=0; i<n; i++)
        {
            cin >> x[i] >> y[i];
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        for(int i=0; i<n; i++)
        {
          if(x[i]==y[i])

            flag =1;
        else{
            flag =0;
            break;

        }
          // cout << x[i] << ' ' << y[i] << endl;

        }
        if(flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
return 0;
}
