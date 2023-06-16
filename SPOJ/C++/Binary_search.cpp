#include <iostream>
#include <vector>
#include<stdio.h>
using namespace std;

vector<int>numeros;

int verificando(int mid){
    while(numeros[mid] == numeros[mid-1]){
        mid--;
    }
    return mid;

}

int BuscaBinaria(int tamanho, int procurar){
    int low = 0;
    int high = tamanho - 1;
    int mid = 0;

    while(low <= high){
        mid = (low + high) / 2;
        if(numeros[mid] == procurar){
            int novo_mid = verificando(mid);
            return novo_mid;
        }
        else{
            if(numeros[mid] > procurar){
                high = mid  - 1;
            }
            else{
                low = mid + 1;
            }
        }
    } 
    
    return -1;
}



int main(){
    int tamanho, n_procurado,n,indice,procurado;
    cin >> tamanho >> n_procurado;

    for(int i = 0; i < tamanho; i++){
        scanf("%d",&n);
        numeros.push_back(n);
    }

    for(int i = 0; i < n_procurado; i++){
        scanf("%d",&procurado);
        indice = BuscaBinaria(tamanho,procurado);
        printf("%d\n", indice);
    }
    return 0;
}