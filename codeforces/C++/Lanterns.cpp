#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int l, t,p;
    cin >> l >> t;
    vector<int>posicoes;
    for(int i = 0; i < l; i++){
        cin >> p;
        posicoes.push_back(p);
    }
    sort(posicoes.begin(),posicoes.end());
    double d;
    double maior = 0;
    
   
    for(int i = 0; i < posicoes.size()-1; i++){
        d = posicoes[i+1] - posicoes[i];
        if(d > maior)maior = d;
    }
    maior = maior/2;

    if(maior < posicoes[0]){
        maior = posicoes[0];
    }
    if( maior < ( t - posicoes[l-1])){
        maior =  t - posicoes[l-1];
    }
    
    cout << setprecision(10) << fixed << maior << endl;
    return 0;
}