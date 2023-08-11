#include <iostream>
#include <vector>
using namespace std;

int main(){
    int teste,qtd,s,tira,soma;

    vector<int>bolinha;
    cin >> teste;
    for(int i = 1; i <= teste; i++){
        cin >> qtd >> tira >> s;
        soma = 0;
        s -= 1;
        for(int c = 1; c <= qtd; c++){
            bolinha.push_back(c);
        }
        for(int h = 0; h < tira; h++){
            bolinha[s+h] = 0;
        }

        for(int j = 0; j < bolinha.size(); j++){
            soma += bolinha[j];
        }
        cout << "Case " << i << ": " << soma << endl;
        bolinha.clear();

    }
    return 0;
}