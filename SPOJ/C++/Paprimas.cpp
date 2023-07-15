#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int primos(int n){
    int alternativo = 1,j;
    for(j = 2; j <= sqrt(n); j++){
        if(n % j == 0){
            alternativo++;
            break;
        }
    }
    return alternativo;
}



int main(){
    string palavra;
    while(cin >> palavra){
        char m = 97;
        char M = 65;
        int contM = 27;
        int contm = 1;
        int veri = 0;

        //para ver letra minuscula
        for(int i = 0; i < 26; i++){
            for(int j = 0; j <= palavra.size()-1; j++){
                if(palavra[j] == m){
                    veri+=contm;
                }
            }
            m++;
            contm++;
        }
        //para ver letra maiuscula
        for(int i = 0; i < 26; i++){
            for(int j = 0; j <= palavra.size()-1; j++){
                if(palavra[j] == M){
                    veri+=contM;
                }
            }
            M++;
            contM++;
        }

        if(primos(veri) == 1){
            cout << "It is a prime word." << endl;
        }
        else{
            cout << "It is not a prime word." << endl;
        }

        
    }
    return 0;
}