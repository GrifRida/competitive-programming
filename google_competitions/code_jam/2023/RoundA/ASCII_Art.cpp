#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.in","r", stdin);
    int t;
    cin>>t;
    for(int tc = 0; tc < t; tc++){
        cout<<"Case #"<<tc + 1<<": ";
        long long n;
        cin>>n;
        long long i = floor(sqrt(n / 13));
        while(13 * i * (i +1) < n)i++;
        i--;
        char res = ((n - 1 - 13 * i * (i +1)) / (i + 1)) + 'A';
        cout<<res<<endl;
    }


}

