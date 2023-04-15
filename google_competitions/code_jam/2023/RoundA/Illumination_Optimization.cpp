#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in","r", stdin);
    int t;
    cin>>t;
    for(int tc = 0; tc < t; tc++){
        cout<<"Case #"<<tc + 1<<": ";
        int m, r, n;
        cin>>m>>r>>n;
        int x[n];
        string ans = "";
        for(int i = 0; i < n; i++){
            cin>>x[i];
            if(i == 0 && x[i] > r)ans = "IMPOSSIBLE";
            else {
                if(n > 2 && x[i] - x[i - 1] > 2 * r)ans = "IMPOSSIBLE";
            }
            if(i == n - 1 && m - x[i] > r)ans = "IMPOSSIBLE";


        }
        if(ans == "IMPOSSIBLE"){
            cout<<ans<<endl;
            continue;
        }
        int illuminated = 0, res = 0;
        for(int i = 0; i < n; i++){
            int j = i + 1;
            while(j < n && x[j] - r <= illuminated){
                j++;
            }
            illuminated = x[j - 1] + r;
            res++;
            if(illuminated >= m)break;
            i = j - 1;

        }

        cout<<res<<endl;

    }

}

