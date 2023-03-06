#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        cout<<"Case #"<<o+1<<": ";
        string out = "YES";
        long long int n,d ,c, m;
        cin>>n>>d>>c>>m;
        string s;
        cin>>s;
        for(int i= 0;i<n;i++)
        {
            if(s[i] == 'D')
            {
                if(d == 0 || c < 0){
                    out = "NO";
                    break;
                }
                else
                {
                    d--;
                    c += m;
                }
                
            }
            else
            {
                c--;
            }
        }
        cout<<out<<endl;
    }
}
