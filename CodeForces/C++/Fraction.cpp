#include <iostream>
#include <cmath>
using namespace std;

bool primos(int a, int b){
    bool primo = true;

    for(int i = 2; i <= a; i++){
        if(a%i == 0 && b%i == 0){
            primo = false;
            break;
        }
    }
    return primo;
}

int main(){
    int n,a,b;
    int f = -1;
    cin >> n;
    
    for(int i = 1; i < n/2 + 1; i++){
        int j = n - i;

        if(primos(i,j) == true && i/j >= f){
            f = i/j;
            a = i;
            b = j;
        }
    }
    cout << a << " " << b << endl;

    return 0;
}