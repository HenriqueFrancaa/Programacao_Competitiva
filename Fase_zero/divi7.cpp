#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int divis(int n){
    int j = 0;
    int numero;
    j = n%10;
    numero = n/10 * 3 + j;
    if(numero%7 == 0){
        return numero;
    } 
}

int main(){
    int numero,resultado, n,h;
    scanf("%d",&numero);

    while(numero > 7){
        printf("%d\n",numero);
        numero = divis(numero);
    }
    printf("%d",numero);
    
    return 0;
}