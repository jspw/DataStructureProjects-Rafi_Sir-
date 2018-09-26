#include<bits/stdc++.h>
using namespace std;

void print(int a[], int n)
{
    int i;
    cout<<"Array : " ;
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;

}

void swap_a(int *x,int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

void  BubbleSortInAscendingOrder(int a[] ,int n )
{
    int i,j;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                swap_a(&a[i],&a[i+1]);
        }
    }

}


void  BubbleSortInDescendingOrder(int a[] ,int n )
{
    int i,j;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                swap_a(&a[i],&a[i+1]);
        }
    }

}


int main()
{
    int i,n,a[1000];
    printf("Enter the number of elements of array : ");

    cin>>n;
    cout<<"Enter array elements : " ;
    for(i=0; i<n; i++)
        cin>>a[i];
    print(a,n);

    BubbleSortInAscendingOrder(a,n);
    cout<<"Ascending ordered Sorted " ;
    print(a,n);
    BubbleSortInDescendingOrder(a,n);
    cout<<"Descending ordered Sorted " ;
    print(a,n);

    return 0;
}


