#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,a,p,o;
    cin >> n >> m;
    vector<int>faixas;
    vector<int>premios;
    vector<int>ogros;

    for(int i = 0; i < n-1; i++){
        cin >> a;
        faixas.push_back(a);
    }
    for(int i = 0; i < n; i++){
        cin >> p;
        premios.push_back(p);
    }
    
    //comparar cada força com premiação
    for(int i = 0; i < m; i++){
        cin >> o;
        if(o < faixas[0]){
            ogros.push_back(premios[0]);
        }
        else if(o >= faixas[n-2]){
            ogros.push_back(premios[n-1]);
        }
        else{
            int x = 0; int faixa = n-1;
            while(x < faixa-1){
                if(o >= faixas[x] && o < faixas[x+1]){
                    ogros.push_back(premios[x+1]);
                }
                x++;
            }
        }
    }
    for(int i = 0; i < ogros.size(); i++){
        cout << ogros[i] << " ";
        } cout << endl;
    


    return 0;
}
