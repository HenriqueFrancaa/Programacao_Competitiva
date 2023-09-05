#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int alunos,n;
    int cont = 1;
    cin >> alunos;
    vector<int>chamada;

    for(int i = 0; i < alunos; i++){
        cin >> n;
        chamada.push_back(n);
    }

    sort(chamada.begin(),chamada.end());

    for(int i = 0; i < alunos-1;i++){
        if(chamada[i] != chamada[i+1])cont++;
    }
    cout << cont << endl;
    return 0;
}