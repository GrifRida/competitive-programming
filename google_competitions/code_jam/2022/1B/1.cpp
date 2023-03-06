#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc; tc < t; tc++)
    {
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        int d_actual = min(d[0],d[n - 1]), l=0, r=n-1, res=0;
        for(int i=0;i<n;i++)
        {
            if(d[l] >= d[r])
            {
                if(d[r] >= d_actual)
                {
                    res++;
                    d_actual = d[r];
                }
                r--;
            }
            else
            {
                if(d[l] >= d_actual)
                {
                    res++;
                    d_actual = d[l];
                }
                l++;
            }
            
        }
        cout<<"Case #"<<tc+1<<": "<<res<<endl;
        
    }
}
