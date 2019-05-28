#include <bits/stdc++.h>

using namespace std;

#define INF ((1<<31)-1)

void random_input(int a[], int n);
void print_array(int a[], int n);
void mergeSort(int a[], int p, int r);
void do_merge(int a[], int p, int q, int r);

int arr[1000];

int main()
{
    int size;
    cin >> size;

    random_input(arr , size);
    mergeSort(arr , 1 , size);
    print_array(arr , size);

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

void print_array(int a[] , int n)
{
    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void mergeSort(int a[], int p, int r)
{
    if(p<r)
    {
        int q=floor((p+r)/2);
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        do_merge(a,p,q,r);
    }
}

void do_merge(int a[],int p, int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1], R[n2+1];
    for(int i=1; i<=n1; i++)
    {
        L[i]=a[p+i-1];
    }
    for(int j=1; j<=n1; j++)
    {
        R[j]=a[q+j];
    }
    L[n1+1]=-INF;
    R[n2+1]=-INF;
    int i=1;
    int j=1;
    for(int k=p; k<=r; k++)
    {
        if(L[i]>=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}
