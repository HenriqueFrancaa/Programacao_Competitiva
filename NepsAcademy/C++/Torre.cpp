#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n;
    int cont = 0;
    int maior = 0;
    cin >> t;
    int tabuleiro[t][t];
    vector<int>linhas;
    vector<int>colunas;

    for(int l=0; l < t; l++){
        for(int c = 0; c < t; c++){
            cin >> n;
            tabuleiro[l][c] = n;
        }
    }

    //vendo a soma de cada linha e colocando dentro de um vetor.
    for(int l = 0; l < t; l++){
        int soma = 0; 
        for(int c = 0; c < t; c++){
            soma += tabuleiro[l][c];
        }
        linhas.push_back(soma);
    }
    //vendo a soma de cada coluna e colocando dentro de um vetor.
    for(int c = 0; c < t; c++){
        int soma = 0;
        for(int l = 0; l < t; l++){
            soma += tabuleiro[l][c];
        }
        colunas.push_back(soma);
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cont = linhas[j] + colunas[i] - (tabuleiro[j][i] * 2);
            if(cont > maior ){
                maior = cont;
            }
        }
    }

    cout << maior << endl;
    return 0;
}