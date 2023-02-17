#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        cout<<"Case #"<<o+1<<": ";
        int n, k=0, r=0, c=0;
        cin>>n;
        int t[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>t[i][j];
                if(i==j)k+=t[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            int e=1;
            for(int j=0;j<n && e;j++)
            {
                for(int k=j+1;k<n && e;k++)
                {
                    if(t[i][j]==t[i][k])
                    {
                        r++;
                        e=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            int e=1;
            for(int j=0;j<n && e;j++)
            {
                for(int k=j+1;k<n && e;k++)
                {
                    if(t[j][i]==t[k][i])
                    {
                        c++;
                        e=0;
                    }
                }
            }
        }
        cout<<k<<" "<<r<<" "<<c<<endl;
    }
}
