#include <iostream>
using namespace std;

int main(){
    while(true){
        int n, novo_numero;
        cin >> n;

        if(n <= 100){
            novo_numero = 91;
        }

        else if(n >= 101){
            novo_numero = n - 10;
        }

        if(n == 0)break;

        cout << "f91(" << n << ") = " << novo_numero << endl;
    }
    return 0;
}

