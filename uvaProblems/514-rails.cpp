#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int v[1000];

    while(cin>>n &&n)
    {

        while(true)
        {
            cin >> v[0];
            if(!v[0])
            {
                printf("\n");
                break;

            }

            else
            {
                for(int i=1; i<n; i++)
                    cin>> v[i];

                int m=1,c=0;
                stack<int>s;

                while(m<=n)
                {
                    s.push(m);
                    while(!s.empty()&& s.top()==v[c])
                    {
                        s.pop();
                        c++;
                        if(c>=n)
                            break;
                    }
                    m++;
                }

                if(s.empty())
                    printf("Yes\n");
                else
                    printf("No\n");

              //  s.clear();
            }
        }
    }
    return 0;
}
