#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

typedef long long ll;

ll divsum(ll n){
    ll sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            sum+=i;
            if(i != n/i){
                sum+=(n/i);
            }
        }
    }
    return sum;
}

int main(){
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1){
            cout << 0 << endl;
        }
        else{
            cout << divsum(n) << endl;
        }
    }
    return 0;
}