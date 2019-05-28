#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue< int >q;
    int n,x;
    while (cin >> n && n)
    {
        for(int i=1; i<=n ; i++)
            q.push(i);
        printf("Discarded cards:");


        int l=(q.size())-1;
        while(l--)
        {
            cout << " " << q.front();
            q.pop();
            x=q.front();
            q.pop();
            if(l!=0)
                cout << "," ;
            q.push(x);


        }
        printf("\nRemaining card: %d\n",q.front());
        q.pop();

    }


    return 0;
}

