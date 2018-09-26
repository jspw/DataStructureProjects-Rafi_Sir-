#include<bits/stdc++.h>
using namespace std;

void print(int a[], int n)
{
    int i;
    cout<<"Array :" ;
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;

}

int  BinarySearch(int a[],int n,int key)
{
    int i,start=0,enda=n-1,mid;


    do
    {
        mid=(start + enda )/2 ;

        if(key>a[mid])
            start = mid+1;
        else if(key<a[mid])
            enda=mid-1;
        else if(key == a[mid])
            return 1;
    }
    while(start <= mid);

    if(start > enda)
        return -1;

}


int main()
{
    int key,i,n,a[1000];
    printf("Enter the number of elements of array :");

    cin>>n;
    cout<<"Enter array elements in ascending order:" ;
    for(i=0; i<n; i++)
        cin>>a[i];
    print(a,n);
    cout<<"Enter number you want to search :" ;
    cin>>key;
    cout<<endl;
    if(BinarySearch(a,n,key))
        cout<<key<<" Found!"<<endl;
    else
        cout<<"Sorry "<<key<<" not found :( "<<endl;

    return 0;
}

