#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;

    while(cin >> s1 >> s2)
    {
        int k=0;

        for(int i=0; i<s2.size() && k<s1.size(); i++)
        {
            if(s2[i]==s1[k])
                k++;

        }
        //cout << "s1 size: " << s1.size() << ' ' << k << endl;

        if(k == s1.size())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
return 0;
}
