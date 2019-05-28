#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,x;
    while(cin >> n)
    {
        s=n;

       while(n>=3)
       {
           s+=(n/3);
           n=(n/3)+(n%3);
       }
       if(n==2)
        s++;

       cout<<s<<endl;
    }
}
