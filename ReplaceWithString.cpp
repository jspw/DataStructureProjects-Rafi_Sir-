#include<bits/stdc++.h>
using namespace std;

void insertString (string s,int n,int p,string sub)
{
    s.replace(n,p,sub);
    cout<<"Updated String : ";
    cout<<s<<endl;
}

int main()
{
    int n,p;
    string  s,sub;
    cout<<"Enter the string : " ;
    getline(cin,s);
    cout<<"Enter the substring you want to insert : " ;
    getline(cin,sub);
    cout<<"Enter the position of main string where you want to insert a substring : ";
    cin>>n>>p;
    insertString(s,n,p,sub);
    return 0;
}
