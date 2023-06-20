#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testes,n,m;
    int cont1 = 0;
    int cont0 = 0;
    char elemento;
    cin >> testes;

    for(int i = 0; i < testes; i++){
        cin >> n >> m;
        char imagem [n][m];
        for(int j = 0; j < n; j++){
            for(int h = 0; h < m; h++){
                cin >> elemento;
                imagem[j][h] = elemento;
                if(j == 0 || j == n-1 || h == 0 || h == m-1 ){
                    if(imagem[j][h] == '0'){
                        cont0++;
                    }
                }
                else{
                    if(imagem[j][h] == '1'){
                        cont1++;
                    }
                }
            }
        }

        if(cont1 >= cont0){
            cout << cont0 << endl;
        }
        else{
            cout << "-1" << endl;
        }

        cont0 = 0;
        cont1 = 0;
        
    }
    return 0;
}