
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
        string s;
        cin>>s;
        int l=s.size();
        int op=0, diff=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]-'0'-op>=0)
            {
                for(int j=0;j<abs(s[i]-'0'-op);j++)
                {
                    cout<<"(";
                }
                for(int j=i;s[j]==s[i];j++)
            	{
                	cout<<s[i];
                	i=j;
            	}
            }
            else
            {
            	
                for(int j=0;j<abs(s[i]-'0'-op);j++)
                {
                    cout<<")";
                }
                for(int j=i;s[j]==s[i];j++)
            	{
                	cout<<s[i];
                	i=j;
            	}
            }
            
            op += (s[i]-'0'-op);
            
        }
        if(op!=0)
        {
            for(int j=0;j<abs(op);j++)
            {
                cout<<")";
            }
        }
        cout<<endl;
    }
}
