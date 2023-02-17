// 2022-05-03
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double b[4] , t[4];
    while(cin>>b[0]>>b[1]>>b[2]>>b[3])
    {
        cin>>t[0]>>t[1]>>t[2]>>t[3];
        double r[4];
        for(int i=0;i<4;i++)r[i] = t[i] - b[i];
        double limites[2], res_top;
        limites[0] = r[0] + r[1]*0 + r[2]*0*0 + r[3]*0*0*0;
        limites[1] = r[0] + r[1]*1 + r[2]*1*1 + r[3]*1*1*1;
        res_top = max(limites[0],limites[1]);
        double delta = 4*r[2]*r[2] - 4*3*r[3]*r[1];
        if(delta >= 0)
        {
            double x[2];
            x[0] = (-2*r[2] - sqrt(delta))/(2*3*r[3]);
            x[1] = (-2*r[2] + sqrt(delta))/(2*3*r[3]);
            if(x[0] >= 0 && x[0] <= 1)
            {
                res_top = max(res_top,r[0] + r[1]*x[0] + r[2]*x[0]*x[0] + r[3]*x[0]*x[0]*x[0]);
            }
            if(x[1] >= 0 && x[1] <= 1)
            {
                res_top = max(res_top,r[0] + r[1]*x[1] + r[2]*x[1]*x[1] + r[3]*x[1]*x[1]*x[1]);
            }
        }
        for(int i=0;i<4;i++)r[i] = t[i] - b[i];
        double res_down;
        limites[0] = r[0] + r[1]*0 + r[2]*0*0 + r[3]*0*0*0;
        limites[1] = r[0] + r[1]*1 + r[2]*1*1 + r[3]*1*1*1;
        res_down = min(limites[0],limites[1]);
        delta = 4*r[2]*r[2] - 4*3*r[3]*r[1];
        if(delta >= 0)
        {
            double x[2];
            x[0] = (-2*r[2] - sqrt(delta))/(2*3*r[3]);
            x[1] = (-2*r[2] + sqrt(delta))/(2*3*r[3]);
            if(x[0] >= 0 && x[0] <= 1)
            {
                res_down = min(res_down,r[0] + r[1]*x[0] + r[2]*x[0]*x[0] + r[3]*x[0]*x[0]*x[0]);
            }
            if(x[1] >= 0 && x[1] <= 1)
            {
                res_down = min(res_down,r[0] + r[1]*x[1] + r[2]*x[1]*x[1] + r[3]*x[1]*x[1]*x[1]);
            }
        }

        printf("%.10f\n",res_top - res_down);


    }
    return 0;
}
