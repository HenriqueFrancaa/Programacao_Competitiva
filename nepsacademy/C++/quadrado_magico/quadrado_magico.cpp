#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,elemento;
    cin >> n;
    int quadrado [n][n];
    int soma = 0,diagonal_D = 0, diagonal_E = 0;
    vector<int>linhas;
    vector<int>colunas;

    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            cin >> elemento;
            quadrado[linha][coluna] = elemento;
        }
    }

    //para ver as somas das linhas
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            soma+= quadrado[linha][coluna];
        }
        linhas.push_back(soma);
        soma = 0;
    }

    //para ver as somas das colunas
    for(int coluna = 0; coluna < n; coluna++){
        for(int linha = 0; linha < n; linha++){
            soma+= quadrado[linha][coluna];
        }
        colunas.push_back(soma);
        soma = 0;
    }
    
    //para ver a diagonal da esquerda para direita
    for(int d = 0; d < n; d++){
        diagonal_D += quadrado[d][d];
    }
    //para ver a diagonal da direita para esquerda
    int s = n - 1;
    for(int linha = 0; linha < n; linha++){
        diagonal_E += quadrado[linha][s];
        s--;
    }
    int contL = 0, contC = 0;
    //para ver se as somas de cada linha é igual
    for(int i = 0; i <  n-1; i++){
        if(linhas[i] == linhas[i+1]){
            contL = linhas[i];
        }
        else{
            contL = 0;
        }
    }
    //para ver se as somas de cada coluna é igual
    for(int i = 0; i < n-1; i++){
        if(colunas[i] == colunas[i+1]){
            contC = colunas[i];
        }
        else{
            contC = 0;
        }
    }
    int contD = 1;
    //para ver se as somas das diagonais são as mesmas
    if(diagonal_D == diagonal_E){
        contD = diagonal_D;
    }
    //para ver se o quadrado é magico
    if(contL == contC  && contL == contD && contD == contC){
        cout << diagonal_D << endl;
    }
    //caso o quadrado não seja mágico
    else{
        cout << "-1" << endl;
    }

    //Neps_Academy ----> Quadrado Mágico

    return 0;
}
