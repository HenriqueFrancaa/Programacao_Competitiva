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
    long long numero,resultado, n,h;
    scanf("%lld",&numero);

    if(numero%7 == 0 && numero != 0){
        while(numero > 7){
            printf("%lld\n",numero);
            numero = divis(numero);   
        }
        printf("7");
    }
    else if(numero % 7 != 0 && numero != 7 || numero == 0){
        printf("%lld", numero);
    }
   
    return 0;
}