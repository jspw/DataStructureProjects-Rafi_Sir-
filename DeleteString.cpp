#include<bits/stdc++.h>
using namespace std;
void DeleteString (string s,int p,int n)
{
    s.erase(p,n);
    cout<<"Updated String after deleting "<<n<<" characters from "<<p<<"th index : ";
    cout<<s<<endl;
}
int main()
{
    int n,p;
    string  s;
    cout<<"Enter the string : " ;
    getline(cin,s);
    cout<<"Enter the position of string to start delete : " ;
    cin>>p;
    cout<<"How many characters you want to delete : ";
    cin>>n;
    DeleteString(s,p,n);
    return 0;
}
