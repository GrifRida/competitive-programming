#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc; tc < t; tc++)
    {
        string s, res="";
        cin>>s;
        int n = s.size();
        for(int i=0; i < n; i++)
        {
            string to_add = "";
            int j = i;
            while(j < n && s[i] == s[j])
            {
                to_add = to_add + s[i];
                j++;
            }
            if(j < n)
            {
                if(s[i] < s[j])
                {
                    to_add = to_add + to_add;
                }
            }
            res = res + to_add;
            i = j - 1;
        }
        cout<<"Case #"<<tc+1<<": "<<res<<endl;
        
    }
}
