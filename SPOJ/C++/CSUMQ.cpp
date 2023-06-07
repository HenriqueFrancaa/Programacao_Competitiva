#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tamanho,n,consultas,ponto1,ponto2;
    int soma = 0;
    cin >> tamanho;
    vector<int>numeros;
    for(int i = 0;i < tamanho; i++){
        cin >> n;
        numeros.push_back(n);
    }
    cin >> consultas;
    for(int i = 0; i < consultas; i++){
        cin >> ponto1 >> ponto2;
        for(int j = ponto1; j <= ponto2; j++){
            soma += numeros[j];
        }


        cout << soma << endl;
        soma = 0;
    }
    return 0;
    //CSUMQ.cpp -----> SPOJ
}

