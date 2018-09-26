#include<bits/stdc++.h>
using namespace std;

void insertString (string s,int n,string sub)
{
    s.insert(n,sub);
    cout<<"Updated String : ";
    cout<<s<<endl;
}

int main()
{
    int n;
    string  s,sub;
    cout<<"Enter the string : " ;
    getline(cin,s);
    cout<<"Enter the substring you want to insert : " ;
    getline(cin,sub);
    cout<<"Enter the position of main string where you want to insert a substring : ";
    cin>>n;
    insertString(s,n,sub);
    return 0;
}
