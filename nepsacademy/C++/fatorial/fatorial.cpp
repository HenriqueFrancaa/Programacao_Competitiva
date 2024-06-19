#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

ll fatorial(int n){

    if(n == 0 || n == 1)return 1;

    return n * fatorial(n-1);
}


int main(){
    ll n; cin >> n;
    
    if(n == 0 || n == 1)cout << 1 << endl;

    else{
        cout << fatorial(n) << endl;
    }

    return 0;
}
