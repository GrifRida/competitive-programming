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
        string s[n], sl[20000], sr[20000], sm[20000];
        string outr="", outl="";
        int mxl=0, inl=-1, mxr=0, mxm=0, inm=-1, inr=-1, p=0, q=0, m=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];

            int j=0, l=1, r=1;

            string sa="";
            for(j=0;j<s[i].size();j++)
            {
                if(s[i][j]=='*')
                {
                    if(l)
                    {
                        sl[p]=sa;
                        p++;
                        l=0;
                    }
                    else
                    {
                        sm[m]=sa;
                        m++;
                    }
                    sa="";
                }
                else
                {
                    sa=sa+s[i][j];
                }
                if(j==s[i].size()-1 && s[i][j]!='*')
                {
                    sr[q]=sa;
                    q++;
                    sa="";
                }

            }



        }

        for(int i=0;i<q;i++)
        {
            if(sr[i].size()>=mxr)
            {
                mxr=sr[i].size();
                inr=i;
            }
        }
        for(int i=0;i<p;i++)
        {
            if(sl[i].size()>=mxl)
            {
                mxl=sl[i].size();
                inl=i;
            }
        }


        for(int i=0;i<q && outl!="*" && outr!="*";i++)
        {
            if(inr!=i)
            {
                for(int j=sr[i].size()-1;j>=0;j--)
                {
                    if(sr[i][j]!=sr[inr][mxr-sr[i].size()+j])
                    {
                        outr="*";
                        break;
                    }
                }
            }

        }
        for(int i=0;i<p && outl!="*" && outr!="*";i++)
        {
            if(inl!=i)
            {
                for(int j=0;j<sl[i].size();j++)
                {
                    if(sl[i][j]!=sl[inl][j])
                    {
                        outl="*";
                        break;
                    }
                }
            }
        }


        if(outl!="*" && outr != "*")
        {
            for(int i=0;i<mxl;i++)cout<<sl[inl][i];
            for(int i=0;i<m;i++)cout<<sm[i];
            for(int i=0;i<mxr;i++)cout<<sr[inr][i];

            cout<<endl;
        }
        else
            cout<<"*"<<endl;


    }
}

