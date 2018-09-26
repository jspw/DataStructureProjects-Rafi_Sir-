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
        mid=(start+enda)/2;

        if(a[mid]==key)
        {
            printf("%d Find at index no %d",key, mid+1);
            break;
        }
        else if(a[mid]<key)
        {
            start = mid + 1;
        }
        else
        {
            enda=mid-1;
        }
    }
    while(start<=enda);
        if (start>enda)
        printf("%d no found ",key);

}


int main()
{
    int p,key,i,n,a[1000];
    printf("Enter the number of elements of array :");

    cin>>n;
    cout<<"Enter array elements in ascending order:" ;
    for(i=0; i<n; i++)
        cin>>a[i];
    print(a,n);
    cout<<"Enter number you want to search :" ;
    cin>>key;
    cout<<endl;
    BinarySearch(a,n,key);
    return 0;
}

