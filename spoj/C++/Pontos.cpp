#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


double plano(int x1, int x2, int y1, int y2){
    double X = pow((x1 - x2),2);
    double Y = pow((y1 - y2),2);
    double hipotenusa = sqrt(X + Y);
    return hipotenusa;
}
int main(){
    int t,x,y;
    cin >> t;
    vector<int>X;
    vector<int>Y;

    for(int i = 0; i < t; i++){
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);
    }

    double D = 2000000;

    for(int i = 0; i < t; i++){
        for(int j = i+1; j < t; j++){
            double dis = plano(X[i],X[j], Y[i], Y[j]);
            if(dis < D ){
                D = dis;
            }
        }
    }

    cout << fixed << setprecision(3) << D << endl;


    return 0;
}
