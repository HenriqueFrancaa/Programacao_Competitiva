#include <iostream>
using namespace std;
#define MAX 5000

int multiplica(int i, int num[], int tam){
    int resto = 0;
    for(int j = 0; j < tam; j++){
        int produto = num[j] * i + resto;
        num[j] = produto % 10;
        resto = produto / 10;
    }
    while(resto > 0){
        num[tam] = resto % 10;
        resto /= 10;
        tam++;
    }
    return tam;
}

int main(){
    int N;
    while(cin >> N){
        int num[MAX]; 
        num[0] = 1;
        int tam = 1;
        for(int i = 2; i <= N; i++){
            tam = multiplica(i, num, tam);
        }
        cout << N << "!" << endl;
        for(int i = tam-1; i >= 0; i--){
            cout << num[i];
        } cout << endl;
    }

    return 0;
    // 623 Uva Online Judge --> 500!
    
}
