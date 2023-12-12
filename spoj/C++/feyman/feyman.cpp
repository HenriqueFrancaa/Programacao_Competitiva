#include <iostream>
#include <math.h>
using namespace std;

int main(){
    while(true){
        int n;
        int cont = 0;
        int total;
        cin >> n;

        if(n == 0){
            break;
        }

        else{
            for(int i = n; i >= 1; i--){
                total = pow(i,2);
                cont = cont + total;
            }
            cout << cont << endl;
        }
    }
    //SPOJ - SAMER08F-Feynman
    //https://www.spoj.com/problems/SAMER08F/
    return 0;
}
