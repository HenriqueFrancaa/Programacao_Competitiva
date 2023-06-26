#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long selos;
    scanf("%lld",&selos);
    bool veri = false;
    //conta = selos/i(colunas) = linhas ------> ver se linhas * i(colunas) == selos;

    for(long long colunas = 2; colunas <= sqrt(selos); colunas++){
        long long linhas = selos/colunas;
        if(linhas * colunas == selos){
            veri = true;
            printf("S\n");
            break;
        }    
    }

    if(veri == false){
        printf("N\n");
    }
    // SELOS ----> SPOJ
    return 0;
}