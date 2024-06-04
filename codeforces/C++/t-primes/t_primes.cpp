#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

bool Is_prime(ll n){
    if(n == 2)return true;
    if(n%2 == 0)return false;
    for(ll i = 3; i <= sqrt(n); i+=2){
        if(n%i == 0)return false;
    }
    return true;
}

int main(){
    int n;
    ll x;
    ll r2;
    double r1;
    cin >> n;
    while(n--){
        cin >> x;
        if(x < 4){
            cout << "NO" << endl;
        }
        else{
            r1 = sqrt(x); r2 = sqrt(x);
            if(r1 == r2){
                if(Is_prime(r2)){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                cout << "NO" << endl;
            }  
        }
    }
    return 0;
    //CodeForces -> B. T-Primes
    //https://codeforces.com/problemset/problem/230/B
}