#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,a,b,c;

    while(cin >> x >> y)
    {
     a=0;
     b=0;
     c=1;

     while(1)
     {
         if(a-b>=x)
            break;
         else
         {
             c++;
             a+=y;
             b+=x;
         }
     }
     cout<<c<<endl;
    }
return 0;
}
