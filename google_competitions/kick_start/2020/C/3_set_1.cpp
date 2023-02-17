#include<bits/stdc++.h>
using namespace std;
int square(long long n)
{
    if(n<2 && n>=0)return 1;
    long long int t=sqrt(n);
    //while(t*t<n)t++;
    if(t*t==n)return 1;
    return 0;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        cout<<"Case #"<<o+1<<": ";
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        long long cmp=0;
        for(int i=0;i<n;i++)
        {
            long long int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=a[j];
                if(square(sum)==1)cmp++;
            }
        }
        cout<<cmp<<endl;

    }
}
