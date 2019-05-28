#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,ans,i,c;

    while(scanf("%lld",&n)!=EOF)
    {
        i=1;
        c=1;
        while(i%n!=0)
        {
            i = ((i*10)%n+(1%n)%n);
            c++;
        }
    cout << c << endl;
    }
return 0;
}
