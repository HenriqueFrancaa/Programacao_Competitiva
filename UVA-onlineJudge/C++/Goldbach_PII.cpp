#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int primos(int n){
    int alternativo = 1,j;
    for(j = 2; j <= sqrt(n); j++){
        if(n % j == 0){
            alternativo++;
            break;
        }
    }
    return alternativo;
}

int main(){
    int n;
    vector<int>numeros;
    while(cin >> n){
        int cont = 0;
        if(n == 0)break;

        for(int i = 2; i < n; i++){
            if(primos(i) == 1){
                numeros.push_back(i);
            }
        }
        for(int i = 0; i < numeros.size(); i++){
            for(int j = i; j < numeros.size(); j++){
                if(numeros[i] + numeros[j] == n){
                    cont++;
                }
            }
        }
        cout << cont << endl;
        numeros.clear();
    }
    return 0;
}