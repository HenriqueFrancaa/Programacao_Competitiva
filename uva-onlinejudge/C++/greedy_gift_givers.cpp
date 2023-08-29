#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N, cont = 0;
    vector<string>nomes;
    vector<int>valores;
    string nome;
    while(cin >> N){
        if(cont != 0){
            cout << endl;
        }
        int valor, pessoas, pos1, pos2;
        for(int i = 0; i < N; i++){
            cin >> nome;
            nomes.push_back(nome);
            valores.push_back(0);
        }
        for(int j = 0; j < N; j++){
            cin >> nome >> valor >> pessoas;
            for(int k = 0; k < N; k++){
                if(nome == nomes[k]){
                    pos1 = k;
                }
            }
            if(pessoas != 0){
                valores[pos1] -= valor;
                for(int l = 0; l < pessoas; l++){
                    cin >> nome;
                    for(int m = 0; m < N; m++){
                        if(nome == nomes[m]){
                            pos2 = m;
                        }
                    }
                    valores[pos2] += valor / pessoas;
                }
                valores[pos1] += valor % pessoas;
            }
        }
        for(int i = 0; i < N; i++){
            cout << nomes[i] << " " << valores[i] << endl;
        }

        nomes.clear();
        valores.clear();
        cont++;
    }

    return 0;
}
