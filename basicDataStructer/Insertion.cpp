#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp,pos;
    int a[1001];

    cout << "Enter How Many Elements Needs To Be Sorted" << endl;
    cin >> n;

    cout << "Enter the Elements" << endl;
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=1; i<n-1; i++)
    {
        temp = a[i];
        pos =i;

        while(pos>0 && a[pos-1]>temp)
        {
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = temp;
    }

    cout << "Sorted Array" << endl;

    for(int i=0; i<n; i++)
        cout << a[i] << endl;

return 0;
}
