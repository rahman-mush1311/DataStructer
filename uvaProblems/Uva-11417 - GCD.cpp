#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
    int c;

    if(m==0 || n==0)
        return 0;
    else
    {
        while(m!=0)

        {
          c=n%m;
          n=m;
          m=c;

        }
        return n;
    }
}
int main()
{
    int x,y,c;

    while(cin >> x && x)
    {
        y=0;

        for(int i=1; i<x; i++)
        {
            for(int j=i+1; j<=x; j++){

                y+=gcd(i,j);
            }

        }
        cout<<y<<endl;
    }
return 0;
}
