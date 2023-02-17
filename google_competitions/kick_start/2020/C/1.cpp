#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        cout<<"Case #"<<o+1<<": ";
        int n, k;
        cin>>n>>k;
        int a[n], cmp=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-k+1;i++)
        {
            int e=1;
            if(a[i]==k)
            {
                for(int j=i+1;j<i+k && e;j++)
                {
                    if(a[j-1]-a[j]!=1)e=0;
                }
                cmp+=e;
            }

        }
        cout<<cmp<<endl;

    }
}
