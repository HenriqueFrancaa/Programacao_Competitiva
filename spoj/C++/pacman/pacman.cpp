#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    int c = 0;
    int cont = 0; int max = 0;
    char tab[t][t];

    for(int i = 0; i < t; i++){ // montando o tabuleiro
        for(int j = 0; j < t; j++){
            cin >> tab[i][j];
        }
    }

    int dir = 0;
    for(int i = 0; i < t; i++){
        if(dir == 0){
            while(c < t){
                if(tab[i][c] == 'o'){
                    cont++;
                }
                else if(tab[i][c] == 'A'){
                    if(cont > max){
                        max = cont;
                    }
                    cont = 0;
                }
                c++;
            }
            dir++;
            c = t - 1;
        }
        else{
            while(c >= 0){
                if(tab[i][c] == 'o'){
                    cont++;
                }
                else if(tab[i][c] == 'A'){
                    if(cont > max){
                        max = cont;
                    }
                    cont = 0;
                }
                c--;
            }
            dir--;
            c = 0;
        }
    }

    if(cont > max){
        max = cont;
    }

    cout << max << endl;

    return 0;
}
