#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,c;

    while(cin >> n)
    {
        c=0;

        for(int i=0; i<5; i++)
        {
            cin>>x;
            if(n==x)
                c++;
        }
        cout<<c<<endl;
    }
return 0;
}
