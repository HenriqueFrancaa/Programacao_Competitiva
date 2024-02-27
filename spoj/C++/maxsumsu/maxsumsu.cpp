#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,x,n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x;
        int soma = 0;
        vector<int>numeros;
        for(int j = 0; j < x; j++){
            cin >> n;
            numeros.push_back(n);
        }
        for(int j = 0; j < numeros.size(); j++){
            soma = numeros[j] + soma;
            if(soma < 0){
                soma = 0;
            }
        }

        cout << soma << endl;

    }
    return 0;
}