#include <iostream>
#include <vector>
using namespace std;

int main(){
    int botas,tamanho;
    char pe;
    int cont = 0;
    cin >> botas;

    vector<int>D;
    vector<int>E;

    for(int i = 0; i < botas; i++){
        cin >> tamanho >> pe;
        if(pe == 'D'){
            D.push_back(tamanho);
        }
        else if(pe == 'E'){
            E.push_back(tamanho);
        }
    }

    for(int i = 0; i < D.size(); i++){
        for(int j = 0; j < E.size(); j++){
            if(D[i] == E[j]){
                cont++;
                E[j] = 0;
                break;
            }
        }
    }

    cout << cont << endl;

    return 0;
}