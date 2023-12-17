#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
typedef long long ll;

int main(){
    ll n,m,k1,k0,conj=0;
    cin >> n >> m;
    ll matriz[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];    
        }
    }  
    //vendo de cada coluna;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matriz[i][j] == 1)k1++;
            else if(matriz[i][j] == 0)k0++;
        }
        ll p =  ((pow(2,k1)-1) + (pow(2,k0)-1));
        conj += p;
        k1 = 0, k0 = 0;
    }

    //vendo de cada linha
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matriz[j][i] == 1)k1++;
            else if(matriz[j][i] == 0)k0++;
        }
        ll p =  ((pow(2,k1)-1) + (pow(2,k0)-1));
        conj += p;
        k1 = 0, k0 = 0;
    }

    conj -= (n*m);
    cout << conj << endl;
    //CodeForces - B. Rectangles
    //https://codeforces.com/problemset/problem/844/B

    return 0;   
}