#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m;
    int e[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            e[i][j] = x;
        }
    } // montando a matriz escada;

    bool validate = true; int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = p; j < m; j++){
            if(!validate)break;
            if(e[i][j] != 0){
                for(int z = i+1; z < n; z++){ // ver se todos os elementos em baixo são zeros
                    if(e[z][j] != 0){
                        validate = false;
                        break;
                    }
                }
                p = p+1;
                break;
            }
            else{
                for(int z = i+1; z < n; z++){ // vendo se todos os elementos abaixo sao zeros
                    if(e[z][j] != 0){
                        validate = false;
                        break;
                    }
                }
                i = i-1;
                p = p+1;
                break;
            }
            
        }
    }

    if(validate)cout << "S" << endl;
    else cout << "N" << endl;
    // SPOJ -> ESCADA14 - Matriz Escada
    //https://br.spoj.com/problems/ESCADA14/

    return 0;
}