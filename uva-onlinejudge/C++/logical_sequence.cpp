#include <iostream>
using namespace std;

int main(){

    int x,y;
    cin >> x >> y;

    int colunas = x;
    int linhas  = (y/x) - 1;

    for(int i = 1; i <= y; i++){
        if(i == x){
            cout << i << endl;
            x = x + colunas;
        }
        else{
            cout << i << " ";
        }
            
    }
    return 0;
}