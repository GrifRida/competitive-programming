// 	2020-04-15
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    string n, m;
    cin>>n>>m;
    int ln=n.size(), lm=m.size();
    if(lm>ln)
    {
        cout<<"0.";
        int i;
        for(i=0;i<lm-ln-1;i++)cout<<"0";
        for(i=ln-1;i>=0 && n[i]=='0';i--);
        for(int j=0;j<=i;j++)cout<<n[j];
        cout<<endl;
    }
    else
    {
        int i=0;
        string res="";
        for(i=0;i<ln-lm+1;i++)cout<<n[i];
        int j=ln-1;
        for(j;j>=i && n[j]=='0';j--);
        if(j>=i)
        {
            cout<<".";
            for(i;i<=j;i++)cout<<n[i];
        }
        cout<<endl;

    }
    return 0;
}

