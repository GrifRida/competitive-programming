#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        cout<<"Case #"<<o+1<<": ";
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cmp = 1;
        cout<<"1";
        if(n==1)cout<<endl;
        else
        cout<<" ";
        for(int i=1;i<n;i++)
        {
            if(s[i]>s[i-1])
            {
                cmp++;
                cout<<cmp;
                if(i == n-1)cout<<endl;
                else
                cout<<" ";
            }
            else
            {
                cmp = 1;
                cout<<cmp;
                if(i == n-1)cout<<endl;
                else
                cout<<" ";
            }
        }
    }
}
