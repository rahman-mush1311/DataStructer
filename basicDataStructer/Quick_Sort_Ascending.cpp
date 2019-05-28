#include <bits/stdc++.h>

using namespace std;

void random_input(int a[] , int n);
void print_array(int a[] , int n);
void quick_Sort(int a[] , int f , int l);

int arr[1000],temp;

int main()
{
    int size;
    cin >> size;

    random_input(arr,size);
    quick_Sort(arr,1,size);
    print_array(arr,size);

    return 0;

}

void random_input(int a[] , int n)
{
    for(int i=1; i<=n ; i++)
    {
        arr[i] = rand()%1000;
        cout << a[i] << " " ;
    }
    cout << endl;
}

void quick_Sort(int a[] , int f , int l)
{
    if(f<l)
    {
        int i = f+1;
        while(a[i]<a[f])
        {
            i++;
        }
        int j = l;
        while(a[j]>a[f])
        {
            j--;
        }

        while(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            while(!(a[i] >= a[f]))
            {
                i++;
            }
            while(!(a[j] <= a[f]))
            {
                j--;
            }
        }

        temp = a[f];
        a[f] = a[j];
        a[j] = temp;

        quick_Sort(a , f , j-1);
        quick_Sort(a , j+1 , l);
    }
}

void print_array(int a[] , int n)
{
    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
