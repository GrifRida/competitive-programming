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
        int n;
        cin>>n;
        int s[1000], e[1000], in[1000];
        char out[1001];
        int c, g;
        c=0; g=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>e[i];
            in[i]=i;
            out[i]='.';
        }
        out[n]='\0';
        for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
                swap(e[i],e[j]);
                swap(in[i],in[j]);

            }
        }
        for(int i=0;i<n;i++)
        {

            if(s[i]>=c)
            {
                out[in[i]]='C';
                c=e[i];
            }
            else
            {
                if(s[i]>=g)
                {
                    out[in[i]]='J';
                    g=e[i];
                }
                else
                {
                    out[0]='i';
                    break;
                }
            }
        }
        if(out[0]=='i')cout<<"IMPOSSIBLE"<<endl;
        else
        cout<<out<<endl;
    }
}
