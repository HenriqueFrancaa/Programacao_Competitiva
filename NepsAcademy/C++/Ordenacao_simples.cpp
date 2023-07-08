#include <iostream>
#include <vector>
using namespace std;

int main(){
    int quantidade;
    cin >> quantidade;
    int n,temp;
    vector<int>numeros;
    for(int i = 0; i < quantidade; i++){
        cin >> n;
        numeros.push_back(n);
    }

    for(int i = 0; i <= numeros.size(); i++){
        for(int j = 0; j < numeros.size()-1; j++){
            if(numeros[j] > numeros[j+1]){
                temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < numeros.size(); i++){
        if(i == numeros.size()-1){
            cout << numeros[i] << endl;
        }
        else{
            cout << numeros[i] << " ";
        }
    }
    return 0;
    // ordenação simples --> NepsAcademy
}