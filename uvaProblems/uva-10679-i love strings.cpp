#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    int t,n,l;
    cin >> t;
    getchar();

    while(t--)
     {   cin>>s1;
         cin>>n;
         getchar();
         while(n--)
          {
              cin>>s2;
              l=s2.size();

              if(s1.substr(0,l)==s2)
                cout<<"y"<<endl;
              else
                cout<<"n"<<endl;

         }

    }
return 0 ;
}
