#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in","r", stdin);
    int t;
    cin>>t;
    for(int tc = 0; tc < t; tc++){
        cout<<"Case #"<<tc + 1<<": ";
        int n;
        cin>>n;
        int colors[n];
        set<int> s;
        for(int i = 0; i < n; i++){
            cin>>colors[i];
        }
        string ans = "";
        for(int i = 0; i < n; i++){
            if(s.find(colors[i]) != s.end()){
                ans = "IMPOSSIBLE";
                break;
            }
            s.insert(colors[i]);
            int j = i + 1;
            while(j < n && colors[j] == colors[i])j++;
            i = j - 1;

        }
        if(ans == "IMPOSSIBLE"){
            cout<<ans<<endl;
            continue;
        }
        //map<int,int>::iterator it;
        for(int i = 0; i < n; i++){
            cout<<colors[i]<<" ";
            int j = i + 1;
            while(j < n && colors[j] == colors[i])j++;
            i = j - 1;

        }
        cout<<endl;
    }

}

