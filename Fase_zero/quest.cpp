#include <iostream>
#include <string>
using namespace std;

int main(){
    int tamanho = 3;
    int contX = 0;
    int contO = 0;
    string jogadas,resultado;
    cin >> jogadas;
    
    for(int i = 0; i < jogadas.size(); i++){
        if(jogadas[i] == 'X'){
            contX++;
        }
        else{
            contO++;
        }
    }

    for(int i = 0; i < jogadas.size(); i++){
        if(jogadas[i] == 'X' && jogadas[i+1] == 'X'){
            resultado = "Alice";
            break;
        }
        else if(jogadas[i] =! jogadas[i+1]){
            resultado = '*';
        }

    }

    if(contX <= 2 && contX > contO){
        cout << resultado << endl;
    }
    else{
        resultado = '?';
        cout << resultado << endl;
    }


    return 0;
}