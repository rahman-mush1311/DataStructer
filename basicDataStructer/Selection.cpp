#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x[1000],n,mini;

    cout << "Enter How Many Elements Needs To Be Sorted" << endl;
    cin>>n;

    cout << "Enter the Elements" << endl;
    for(int i=0; i<n; i++)
        cin >> x[i];

    for(int i=0; i<n-1; i++)
    {
        mini = i;

        for(int j=i+1; j<n; j++)
            if(x[mini]<x[j])
                mini=j;

        swap(x[mini],x[i]);
    }
    cout << "Sorted Array" << endl;
    for(int i=n-1; i>=0; i--)
        cout<< x[i] << ' ';
}


