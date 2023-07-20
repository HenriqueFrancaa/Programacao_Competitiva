#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,e,n;
    while(true){
        cin >> a >> e;
        int cont = 0;
        if(a == 0 && e == 0)break;
        int frequencia[e][a];

        for(int l = 0; l < e; l++){
            for(int c = 0; c < a; c++){
                cin >> n;
                frequencia[l][c] = n;
            }
        }
        for(int coluna = 0; coluna < a; coluna++){
            for(int linha = 0; linha < e; linha++){
                if(frequencia[linha][coluna] == 1){
                    cont++;
                }
            }
            if(cont == e)break;
            cont = 0;
        }
        if(cont == e)cout << "yes" << endl;
        else{
            cout << "no" << endl;
            
        }
    }
    return 0;
}