#include<bits/stdc++.h>

#define SIZE 1000002
#define m 1000000000002
int mark[SIZE];

using namespace std;

void sieve ()
{
         long long int i,j,k,x;
         for(i=4;i<=SIZE;i+=2)
            mark[i]=1;

         for(i=3;i*i<=SIZE;i+=2)
         {
             if(!mark[i])
             {
                 for(j=i*i;j<=SIZE;j+=(2*i))
                    mark[j]=1;
             }
         }

}
int main()
{
    long long int i,t,a,b,c,j,k,x;
    vector <long long int> v;
    sieve();
      for(i=4;i<m;i*=2)
         {
             v.push_back(i);

         }
         for(i=3;i<1000002;i+=2)
         {
            if(mark[i]==0){
          for(j=i;j<m;j*=i){
             v.push_back(j*i);
          }
         }
        }
         sort(v.begin(),v.end());

    cin>>t;

    while(t--)
    {
    cin>>a>>b;
    c=0;
    x=0;
    while(v[x]<a)
        x++;
    while(v[x]<=b)
    {
        x++;
        c++;
    }
    cout<<c<<endl;
    }
return 0;
}
