#include<bits/stdc++.h>

using namespace std;

queue<char>q1,q2;

int main()
{
    string s;
    while(getline(cin,s)){

    int l=s.size();

    for(int i=0; i<l; i++)
    {
        if(s[i]=='[' || s[i]==']')
        {
            i++;
            while(s[i]!=']'){
                if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                q1.push(s[i]);
                i++;
            }
        }

        else if(s[i]=='[' && s[i+1]==']' || s[i]=='[' && s[i+1]=='[' || s[i]==']' && s[i+1]==']' || s[i]==']' && s[i+1]=='[')
            continue;
        else if(s[i]!='[' || s[i]!=']' ||(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') )
            q2.push(s[i]);
    }

    while(!q1.empty()){
        cout<<q1.front();
        q1.pop();
    }

    while(!q2.empty())
    {
        cout <<q2.front();
        q2.pop();
    }
    cout << endl;
}
return 0;
}
