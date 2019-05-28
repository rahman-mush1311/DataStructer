#include<bits/stdc++.h>

using namespace std;

bool ifWonderful(string s, int n)
{
    long long int sum=0;
    string ss= s;

    if(n==1)
        return true;

    else if(n==2)
    {
        reverse(s.begin(),s.end());
        int x=s[0]-'0';
        //cout << x << endl;
        if(x%2==0){
            //cout << x%2 << endl;
            return true;
        }
        else
            return false;

    }

    else if(n==3)
    {
        reverse(s.begin(),s.end());
        for(int i=0; i<ss.size(); i++)
        {
            sum+=ss[i]-'0';
            sum%=3;
            //cout << "For 3: " << sum << endl;

        }
        //cout << "Final 3: " << sum << endl;
        if(sum==0)
            return true;
        else
            return false;
    }

    else if(n==4)
    {
        reverse(s.begin(),s.end());
       sum=s[1]*10+s[0];
        //cout << "For 4: " << sum << endl;
        if(sum%4==0)
            return true;
        else
            return false;

    }

    else if(n==5)
    {
           reverse(s.begin(),s.end());
        int x=s[0]-'0';
        //cout << "For 5: " << x << endl;

        if(x==5 || x==0)
            return true;
        else
            return false;

    }

    else if(n==6)
    {
        bool flag=(ss,2);
        bool flag1=(ss,3);
        //cout << "For 6: " << flag1 <<' ' << flag << endl;
        if(flag==true && flag1==true)
            return true;
        else
            return false;
    }

    else if(n==7 || n==11)
    {
        for(int i=0; i<s.size(); i++)
        {
            sum*=10;
            sum+=ss[i]-'0';
            sum%=n;

            //cout << "For 7: " << sum << endl;
        }
        //cout << "Final 11/7: " << sum << endl;

        if(sum==0)
            return true;
        else
            return false;
    }

    else if(n==8)
    {
        reverse(s.begin(),s.end());
        sum=s[0]+s[1]*10+s[2]*100;
        //cout << "For 8: " << sum << endl;

        if(sum%8==0)
            return true;
        else
            return false;
    }
    else if(n==9)
    {
        reverse(s.begin(),s.end());
        for(int i=0; i<s.size(); i++)
        {
            sum+=s[i]-'0';
            sum%=n;
            //cout << "For 9: " << sum << endl;
        }
        //cout << "Final 9: " << sum << endl;
        if(sum==0)
         return true;
        else
            return false;
    }

    else if(n==10)
    {
        reverse(s.begin(),s.end());
        int x = s[0]-'0';
        //cout << "For 10: " << x << endl;
        if(x==0)
            return true;
        else
            return false;
    }

    else if(n==12)
    {
        bool flag=(ss,4);
        bool flag1=(ss,3);

        //cout << "For 12: " << flag1 <<' ' << flag << endl;

        if(flag==true && flag1== true)
            return true;
        else
            return false;
    }

}

int main()
{
        int t,n,k;
        cin >> t;

        while(t--)
        {
            string s;
            cin >> s;
            cin >> n;

            int flag=0;

            while(n--)
            {
                cin >> k;
                bool f = ifWonderful(s,k);
                if(!f)
                  flag=1;
            }

           /* if(flag==1)
                cout <<str<<" - Simple." << endl;
            else
                cout <<str<<" - Wonderful." << endl;*/
        if(flag==1)
            printf("%s - Simple.\n",s.c_str());
        else
            printf("%s - Wonderful.\n",s.c_str());


        }
}
