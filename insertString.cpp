#include<bits/stdc++.h>
using namespace std;

void insertS(char s[],int n,char sub[])
{
//   cout<<"X"<<endl;
    int i;
    vector <char > v;
    vector <char> :: iterator it ;

    for(i=0; i<strlen(s); i++)
        v.push_back(s[i]);

    it=v.begin();
    while(n>0)
    {
        it++;
        n--;
    }
    for(i=0; i<strlen(sub); i++)
    {
        v.insert(it,sub[i]);
        it++;
    }

    cout<<"The updated string : ";

    for(it=v.begin(); it != v.end(); it++ )
        cout<<*it;
    cout<<endl;
}

int main()
{
    int n;
    char s[1000],sub[1000];
    cout<<"Enter the string : " ;
    gets(s);
    cout<<"Enter the substring you want to insert : " ;
    gets(sub);
    cout<<"Enter the position of main string where you want to insert a substring : ";
    cin>>n;
    insertS(s,n,sub);
    return 0;
}
