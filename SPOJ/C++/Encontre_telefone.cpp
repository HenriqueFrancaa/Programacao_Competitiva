#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string nome;
        while(cin >> nome){
            for(int i = 0; i < nome.size(); i++){
                if(nome[i] == 'A' || nome[i] == 'B' || nome[i] == 'C'){
                    nome[i] = '2';
                }
                else if(nome[i] == 'D' || nome[i] == 'E' || nome[i] == 'F'){
                    nome[i] = '3';
                }
                else if(nome[i] == 'G' || nome[i] == 'H' || nome[i] == 'I'){
                    nome[i] = '4';
                }
                else if(nome[i] == 'J' || nome[i] == 'K' || nome[i] == 'L'){
                    nome[i] = '5';
                }
                else if(nome[i] == 'M' || nome[i] == 'N' || nome[i] == 'O'){
                    nome[i] = '6';
                }
                else if(nome[i] == 'P' || nome[i] == 'Q' || nome[i] == 'R' || nome[i] == 'S'){
                    nome[i] = '7';
                }
                else if(nome[i] == 'T' || nome[i] == 'U' || nome[i] == 'V'){
                    nome[i] = '8';
                }
                else if(nome[i] == 'W' || nome[i] == 'X' || nome[i] == 'Y' || nome[i] == 'Z'){
                    nome[i] = '9';
                }
            }
        
            cout << nome << endl;
        }
        return 0;
    }

