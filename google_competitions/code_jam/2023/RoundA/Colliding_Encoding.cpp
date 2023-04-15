#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in","r", stdin);
    int t;
    cin>>t;
    for(int tc = 0; tc < t; tc++){
        cout<<"Case #"<<tc + 1<<": ";
        char d[26];
        for(int i = 0; i < 26; i++)cin>>d[i];
        int n;
        cin>>n;
        string s[n];
        map<string, int> occ;
        string ans = "NO";
        for(int i = 0; i < n; i++){
                cin>>s[i];
                string tmp = "";
                for(int j = 0; j < s[i].size(); j++){
                    tmp = tmp + d[s[i][j] - 'A'];
                }
                if(ans == "NO" && occ.find(tmp) == occ.end()){
                    occ[tmp] = 1;
                }
                else {
                    ans = "YES";
                }
        }
        cout<<ans<<endl;

    }

}

