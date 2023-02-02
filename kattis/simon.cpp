// 	2017-11-26
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> tos(string s)
{
    vector<string> t;
    int i, j;
    for(i=0;i<1000;i++)t.push_back("");
    j=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            j++;
            continue;
        }
        else
        {
            t[j]=t[j]+s[i];
        }
    }
    t[j+1]="";
    return t;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        vector<string> a;
        for(int o=0;o<1000;o++)a.push_back("");
        a=tos(s);
        int i;
        //cout<<s<<endl;
        if(a[0]=="simon"&&a[1]=="says")
        {
            for(i=2;a[i]!="";i++)
            {
                cout<<a[i];
                if(a[i+1]!="")cout<<" ";
            }
        }
        cout<<endl;
    }
}
