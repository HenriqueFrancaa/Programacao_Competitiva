#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1)return false;
    if(n == 2)return true;
    if(n%2 == 0)return false;
    for(int i = 3; i <= sqrt(n); i+=2){
        if(n%i == 0)return false;
    }
    return true;
}

int main(){
    int t;cin >> t;
    bool f = true;
    while(t--){
        int s,e; cin >> s >> e;
        if(!f)cout << endl;
        for(int i = s; i <= e; i++){
            if(isPrime(i))cout << i << endl;
        }
        f = false;
    }
    return 0;
    //PRIME1 - Prime Generator
    //https://www.spoj.com/problems/PRIME1/
}