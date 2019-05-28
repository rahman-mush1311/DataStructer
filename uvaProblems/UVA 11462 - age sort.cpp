#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,mini,x;
    vector <long long int> v;


    while(cin>>n && n)
    {
        for(int i=0; i<n; i++)
        {
            cin >> x ;
            v.push_back(x);
        }

        for(int i=0; i<n-1; i++)
        {
            mini = i;

            for(int j=i+1; j<n; j++)
                if(v[j]>v[mini])
                mini=j;

            swap(v[mini],v[i]);
        }

            for(int i=n-1; i>=0; i--)
            {
                cout<< v[i];
                if(i>0)
                cout<< ' ';
                else
                cout << endl;

            }

            //while(!v.empty())
                v.clear();
        }
return 0;
}
