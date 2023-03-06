#include<bits/stdc++.h>
using namespace std;
typedef struct objet{
    long long int x1, y1, x2, y2;
}objet;
long long dis(long long x, long long y, objet *ob, int n)
{
    long long res = 0;
    for(int i=0;i<n;i++)
    {
        if(!(x<=ob[i].x2 && x>=ob[i].x1))
        {
            res += min(abs(x-ob[i].x1),abs(x-ob[i].x2));
            
        }
        if(!(y<=ob[i].y2 && y>=ob[i].y1))
        {
            res += min(abs(y-ob[i].y1),abs(y-ob[i].y2));
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        cout<<"Case #"<<o+1<<": ";
        int n; cin>>n;
        objet ob[n];
        long long xmax = 0, ymax = 0;
        for(int i=0;i<n;i++)
        {
            cin>>ob[i].x1>>ob[i].y1>>ob[i].x2>>ob[i].y2;
            if(abs(ob[i].x2)>xmax)xmax = abs(ob[i].x2);
            if(abs(ob[i].y2)>ymax)ymax = abs(ob[i].y2);
        }
        long int xr=0, yr=0;
        long long dismin = 6969696969;
        for(int i=-xmax;i<=xmax;i++)
        {
            for(int j=-ymax;j<=ymax;j++)
            {
                long long aux = dis(i,j,ob,n);
                if(aux < dismin)
                {
                    xr = i;
                    yr = j;
                    dismin = aux;
                }
            }
        }
        cout<<xr<<" "<<yr<<endl;
    }
}
