#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string risadas;
    cin >> risadas;
    int cont = 0;

    vector<char>vogais;
    vector<char>vogais2;


    for(int i = 0; i < risadas.size(); i++){
        if(risadas[i] == 'a' || risadas[i] == 'e' || risadas[i] == 'i' || risadas[i] == 'o' || risadas[i] == 'u'){
            vogais.push_back(risadas[i]);
        }
    }

    for(int i = risadas.size()-1; i >= 0; i--){
        if(risadas[i] == 'a' || risadas[i] == 'e' || risadas[i] == 'i' || risadas[i] == 'o' || risadas[i] == 'u'){
            vogais2.push_back(risadas[i]);
        }
    }

    for(int i = 0; i < vogais.size(); i++){
        if(vogais[i] != vogais2[i]){
            cont++;
        }
    }

    if(cont == 0){
        cout << 'S' << endl;
    }
    else{
        cout << 'N' << endl;
    }


    return 0;
}