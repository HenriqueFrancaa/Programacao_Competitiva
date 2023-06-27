#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testes,t,conta;
    int cont = 10;
    cin >> testes;

    vector<int>tempo;

    for(int i = 0; i < testes; i++){
        cin >> t;
        tempo.push_back(t);
    }

    for(int i = 0; i < testes-1; i++){
        if(tempo[i+1] <= tempo[i]+10){
            cont = cont + (tempo[i+1] - tempo[i]); 
        }
        else{
            cont = cont + 10;
        }
    }

    cout << cont << endl;
    
    return 0;
}