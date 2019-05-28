
#include <bits/stdc++.h>

using namespace std;

void random_input(int a[] , int n);
void print_array(int a[] , int n);
void quickSort(int a[] , int f , int l);

int arr[1000], temp;

int main()
{
    int size;
    cin >> size ;

    random_input(arr,size);
    quickSort(arr,1,size);
    print_array(arr,size);

    return 0;
}

void random_input(int a[] , int n)
{
    for(int i=1; i<=n ; i++)
    {
        a[i] = rand()%1000;
        cout << a[i] << " " ;
    }
    a[0]=INT_MAX;
    cout << endl;
}

void print_array(int a[] , int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}

void quickSort(int a[] , int f , int l)
{
    if(f < l)
    {
        int i = f+1;
        while(a[i] > a[f])
        {
            i++;
        }
        int j = l;
        while(a[j] < a[f])
        {
            j--;
        }

        while(i<j)
        {
            swap(a[i],a[j]);

            while(!(a[i] <= a[f]))
            {
                i++;
            }
            while(!(a[j] >= a[f]))
            {
                j--;
            }
        }

        swap(a[f] , a[j]);
        quickSort(a , f , j-1);
        quickSort(a , j+1 , l);
    }
}
