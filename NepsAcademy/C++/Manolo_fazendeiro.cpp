#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n,q,li,ci,lf,cf;
    int cont = 0;
    cin >> t;

    int orta[t][t];

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cin >> n;
            orta[i][j] = n;
        }
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> li >> ci >> lf >> cf;
        for(int j = li-1; j <= lf-1;j++){
            for(int h = ci-1; h <= cf-1;h++){
                cont = cont + orta[j][h];
                orta[j][h] = 0;
            }
        }
    }
    cout << cont << endl;

    return 0;
}