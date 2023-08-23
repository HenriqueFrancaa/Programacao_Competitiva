#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    char t;
    cin >> n;
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont5 = 0;
    int cont6 = 0;
    int cont7 = 0;
    int cont8 = 0;
    int cont9 = 0;
    char painel[4][4];
    int possiveis = n * 2;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> t;
            painel[i][j] = t;
            if(t == '1'){
                cont1++;
            }
            if(t == '2'){
                cont2++;
            }
            if(t == '3'){
                cont3++;
            }
            if(t == '4'){
                cont4++;
            }
            if(t == '5'){
                cont5++;
            }
            if(t == '6'){
                cont6++;
            }
            if(t == '7'){
                cont7++;
            }
            if(t == '8'){
                cont8++;
            }
            if(t == '9'){
                cont9++;
            }
        }
    }

    if(cont1 <= possiveis && cont2 <= possiveis && cont3 <= possiveis && cont4 <= possiveis && cont5 <= possiveis && cont6 <= possiveis && cont7 <= possiveis && cont8 <= possiveis && cont9 <= possiveis){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }   
    
    return 0;
}