// 2020-01-17
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int h=0;
    while(s!="END")
    {
        cout<<h+1<<" ";
        int l=s.size(), e=1;
        int d[1000], b=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='*')
            {
                int j=i;
                d[b]=0;
                for(j=i+1;j<l&&s[j]=='.';j++)
                {
                    d[b]++;
                }
                b++;
                i=j-1;
            }
        }
        for(int i=1;i<b-1;i++)
        {
            if(d[i-1]-d[i])e=0;
        }
        //cout<<b<<endl;
        if(e)cout<<"EVEN"<<endl;
        else
        cout<<"NOT EVEN"<<endl;
        cin>>s;
        h++;
        
    }
    
}
