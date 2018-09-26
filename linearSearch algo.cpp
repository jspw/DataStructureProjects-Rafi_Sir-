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

int  linearSearch(int a[],int n,int key)
{
    int i;
    for(i=0; i<n; i++)
        if(a[i] == key){
            return i+1;
        }
    return -1;

}


int main()
{
    int key,i,n,a[1000];
    printf("Enter the number of elements of array :");

        cin>>n;
        cout<<"Enter array elements :" ;
        for(i=0; i<n; i++)
            cin>>a[i];
        print(a,n);
        cout<<"Enter number you want to search :" ;
        cin>>key;
        cout<<endl;
        if(linearSearch(a,n,key))
            cout<<key<<" Found! , at "<<linearSearch(a,n,key)<<"th no element"<<endl;
        else
            cout<<"Sorry "<<key<<" not found :( "<<endl;

    return 0;
}
