#include<bits/stdc++.h>
using namespace std;

int NaivePatternMatching (char* text,char* pattern)
{
    ///  cout<<"x"<<endl;
    int p,t,i,j,x=0;
    p=strlen(pattern);
    t=strlen(text);
    for(i=0; i<=t-p; i++)
    {
        ///    cout<<"i = "<<i<<" ";
        for(j=0; j<p; j++)
        {
            ///      cout<<"j = "<<j<<" ";
            if(text[i + j] != pattern[j])
            {
                break;
                ///             cout<<j<<"pat!=text"<<endl;
            }
        }

        if(j == p){
            cout<<"Pattern found at index "<<i<<endl;
            x++;
        }
    }
    return x;
}

int main()
{
    char text [10000],pattern[1000],x[2];
    cout<<"Enter text string : " ;
    gets(text);
    cout<<"Enter the pattern you want to match : ";
//    gets(x);
    gets(pattern);
//    gets(x);
    NaivePatternMatching(text,pattern);
    if(!x)
        cout<<"No match found"<<endl;
    return 0;
}
