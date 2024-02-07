#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<int>ordem;
    map<int,int>rep; // o primero valor será a chave do meu map, e o segundo seria o valor que está armazenado nessa chave
    while(scanf("%d", &n) != EOF){
        if(rep.count(n) == 0){
            rep[n] = 1;
            ordem.push_back(n);
        }
        else{
            rep[n]++;
        }
    }
    for(int i = 0; i < ordem.size(); i++){
        cout << ordem[i] << " " << rep[ordem[i]] << endl;
    }
    return 0;
}