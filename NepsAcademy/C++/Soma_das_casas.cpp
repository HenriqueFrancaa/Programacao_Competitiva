#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    set<long long>numeros;
    
    int c,n,a,b,t;
    cin >> c;


    for(int i = 0; i < c; i++){
        cin >> n;
        numeros.insert(n);
    }

    cin >> t;

    for(set<long long>::iterator it = numeros.begin(); it != numeros.end(); it++){
        if(numeros.count(t - *it) == 1){ // a função count --> vai ver se o numero está presente no vetor, caso ele esteja presente, ele retorna 1, caso contrario, ele retorna 0.
            a = *it;
            b = t - *it;
            break;
        }
    }
    cout << a << " " << b;

    return 0;
}