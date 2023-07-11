// The ide is to find a a regular polygon formed by n vertices (n > 4) from three vertices coordinates
// Inputs: n, x1, y1, x2, y2, x3, y3, from the file input.in
// outputs: n lines that contain polygon vertices, stored in the file output.out (used by th python script to visualize polygon)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.in","r", stdin);
    freopen("output.out","w", stdout);

    int n;
    cin>>n;
    double x[n], y[n];
    double pi = 3.14159265359;
    for(int i = 0; i < 3; i++)cin >> x[i] >> y[i];
    // Trouver la mediatrice de des segments [P1,P2] et [P2,P3]
    double a1, b1;
    int vertical_1 = 0;
    if(y[0] == y[1]){
        vertical_1 = 1;
        b1 = (x[1] + x[0]) / (2.0);
    }
    else
    {
        a1 = - (x[1] - x[0]) / (y[1] - y[0]);
        b1 = (y[1] + y[0]) / (2.0) - a1 * ((x[1] + x[0]) / (2.0));
    }

    double a2, b2;
    int vertical_2 = 0;
    if(y[2] == y[1]){
        vertical_2 = 1;
        b2 = (x[1] + x[2]) / (2.0);
    }
    else
    {
        a2 = - (x[1] - x[2]) / (y[1] - y[2]);
        b2 = (y[1] + y[2]) / (2.0) - a2 * ((x[1] + x[2]) / (2.0));
    }
    // trouver l'intersection des deux mediatrices, qui est le centre du cercle  circonscrit au triangle formé par les trois points
    double xr, yr;
    if(vertical_1){
        xr = b1;
        yr = a2 * xr + b2;
    }
    else if(vertical_2){
        xr = b2;
        yr = a1 * xr + b1;
    }
    else{
        double det = (- a1 * 1 + a2 * 1);
        double det_x = (b1 * 1 - b2 * 1), det_y = (- a1 * b2 + a2 * b1);
        xr = det_x / det;
        yr = det_y / det;
    }
    // touver le rayon du cercle  circonscrit 

    double r = sqrt((xr - x[0]) * (xr - x[0]) + (yr - y[0]) * (yr - y[0]));
    // trouver les n sommets du polygone

    double theta = 2 * pi / (1.0 * n), phi = asin((y[0] - yr) / (r));
    double xmax = -1000000, xmin = 1000000, ymax = -1000000, ymin = 1000000;
    for(int i = 0; i < n; i++){
        double x_aux = xr + r * cos(i * theta + phi);
        double y_aux = yr + r * sin(i * theta + phi);
        cout<<x_aux<<" "<<y_aux<<endl;

    }
    cout << endl;
}
