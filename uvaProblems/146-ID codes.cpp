#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="#")
            break;
        if(!next_permutation(s.begin(),s.end()))
            printf("No Successor\n");
        else
            cout << s << endl;
    }
return 0;
}
