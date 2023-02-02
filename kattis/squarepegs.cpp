// 	2017-12-15
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int m, n, k, rp[100], rh[100], s[100];
    cin>>n>>m>>k;
    int i, j;
    for(i=0;i<n;i++){
        cin>>rp[i];
        rp[i]=rp[i]*rp[i];
    }

    for(i=0;i<m;i++){
        cin>>rh[i];
        rh[i]=rh[i]*rh[i];
    }
    for(i=0;i<k;i++){
        cin>>s[i];
        s[i]=s[i]*s[i]/2;
    }
    int rs[200];
    for(i=0;i<m;i++)rs[i]=rh[i];
    for(i=m;i<m+k;i++)rs[i]=s[i-m];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(rp[i]<rp[j])swap(rp[i],rp[j]);
        }
    }
    for(i=0;i<m+k;i++)
    {
        for(j=i+1;j<m+k;j++)
        {
            if(rs[i]<rs[j])swap(rs[i],rs[j]);
        }
    }
    int c=0;
    j=0;
    for(i=0;i<n&&j<m+k;i++)
    {
        for(j=0;j<k+m;j++)
        {
            if(rp[i]>rs[j]&&rs[j]!=-1)
            {
                c++;
                rs[j]=-1;
                break;
            }
        }
    }
    cout<<c<<endl;

}
