#include <iostream>
#include <vector>
using namespace std;

vector<int>faixas;
vector<int>premios;
vector<int>ogros;
vector<int>res;

int main(){
    // f -> faixas / o -> ogros / a -> faixa premio / p -> premio/ fo -> força ogro 
    int f,o,a,p,fo;
    cin >> f >> o;
    for(int i = 0; i < f-1; i++){
        cin >> a;
        faixas.push_back(a);
    }
    for(int i = 0; i < f; i++){
        cin >> p;
        premios.push_back(p);
    }
    for(int i = 0; i < o; i++){
        cin >> fo;
        ogros.push_back(fo);
    }

    for(int i = 0; i < ogros.size();i++){
        for(int j = 0; j < faixas.size(); j++){
            if(ogros[i] < faixas[j]){
                res.push_back(premios[j]);
                break;
            }
        }
    }

    
    return 0;
}