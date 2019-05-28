#include<bits/stdc++.h>

using namespace std;

bool isTrue(int num)
{
    if(num%7==0)
        return true;
    else
    {
        while(num)
        {
            int rem=num%10;
            num/=10;
            if(rem==7)
                return true;
        }
    }
    return false;
}

int main()
{
    int n,m,k;
    while(scanf("%d%d%d",&n,&m,&k)&&n&&m&&k)
    {
       int clap=1;
       int  person=1;
       int  step=1;

        while(true)
        {
              if (person == m && isTrue(clap)) {
                k--;
                if (k == 0) {
                    cout << clap << endl;
                    break;
                }
            }

            person += step;

            if (person > n) {
                person = n - 1;
                step = -1;
            } else if (person == 0) {
                person = 2;
                step = 1;
            }
            clap++;
        }

    }
}
