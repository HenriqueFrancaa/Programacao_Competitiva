#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int testes;
    cin >> testes;

    for(int i = 0; i < testes; i++){
        double moedas;
        cin >> moedas;
        int resposta = (-1 + sqrt(1 +(8 * moedas)))/2;

        cout << resposta << endl;   
    }
    return 0;
}