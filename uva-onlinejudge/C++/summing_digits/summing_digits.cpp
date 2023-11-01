#include <iostream>
#include <string.h>
using namespace std;

string numero;

int summing(string numero){
    int n;
    while(numero.size() != 1){
        n = 0;
        for(int i = 0; i < numero.size(); i++){
            n += numero[i] - '0';
        }
        numero = to_string(n);
    }
    return n;
}


int main(){
    while(true){
        cin >> numero;
        if(numero[0] == '0')break;

        if(numero.size() == 1){
            cout << numero << endl;
        }
        else{
            int ans = summing(numero);
            cout << ans << endl;
        }
    }
    //UVA 11332 - Summing digits.
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307
    return 0;
}