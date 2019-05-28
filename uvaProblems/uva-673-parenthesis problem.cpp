#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,l;
    char s[150];
    cin >> t;
    getchar();

    while(t--)
     {
     gets(s);
      stack <char> s1;

      l=strlen(s);

      for(i=0;i<l;i++)
       {
           if(!s1.empty() && s[i]==')')
           {
               if(s1.top()=='(')
                    s1.pop();
               else{
                break;
               }
           }
           else if(!s1.empty() && s[i]==']')
           {
               if(s1.top()=='[')
                s1.pop();
               else{
                break;
               }
           }
           else s1.push(s[i]);

      }
      if(s1.empty())
        cout<< "Yes"<< endl;
      else
        cout<<"No"<<endl;
    }
return 0;
}
