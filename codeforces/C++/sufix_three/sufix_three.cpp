#include <iostream>
#include <string>
using namespace std;

int main(){
    int testes;
    string nome;
    cin >> testes;
    for(int i = 0; i < testes; i++){
        cin >> nome;
        if(nome.back() == 'o'){
            cout << "FILIPINO" << endl;
        }
        if(nome.back() == 'u'){
            cout << "JAPANESE" << endl;
        }
        if(nome.back() == 'a'){
            cout << "KOREAN" << endl;
        }
    }
    return 0;
}