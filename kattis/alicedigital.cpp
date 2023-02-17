// 	2019-04-20
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int a[n], b[n];
        int k=0, o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==m)
            {
                b[k]=i;
                k++;
            }
        }
        
        int j=0;
        if(k==1)
        {
            int s=0;
            for(int i=0;i<n;i++)
            {
                if(i<b[0])
                {
                    if(a[i]<m)s=0;
                    else
                    s+=a[i];
                }
                else
                {
                    if(a[i]<m)break;
                    else
                    s+=a[i];
                }
            }
            cout<<s<<endl;
        }
        else
        {
            if(k==0)cout<<"0"<<endl;
            else
            {
                
                for(int i=0;i<k;i++)
                {
                    if(i==k-1)
                    {
                        int s=0;
                        for(j=b[i-1]+1;j<n;j++)
                        {
                            if(j<b[i])
                            {
                                if(a[j]<m)s=0;
                                else
                                s+=a[j];
                            }
                            else
                            {
                                if(a[j]<m)break;
                                else
                                s+=a[j];
                            }
                        }
                        if(s>o)o=s;
                    }
                    else
                    {
                        if(i==0)
                        {
                            int s=0;
                            for(j=0;j<b[i+1];j++)
                            {
                                if(j<b[i])
                                {
                                    if(a[j]<m)s=0;
                                    else
                                    s+=a[j];
                                }
                                else
                                {
                                    if(a[j]<m)break;
                                    else
                                    s+=a[j];
                                }
                            }
                            if(s>o)o=s;
                        }
                        else
                        {
                            int s=0;
                            for(j=b[i-1]+1;j<b[i+1];j++)
                            {
                                if(j<b[i])
                                {
                                    if(a[j]<m)s=0;
                                    else
                                    s+=a[j];
                                }
                                else
                                {
                                    if(a[j]<m)break;
                                    else
                                    s+=a[j];
                                }
                            }
                            if(s>o)o=s;
                        }
                    }
                }
                cout<<o<<endl;
            }
        }
        
        
    }
}
