#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int memory[10000];

long calculo(long n){
    long res = 0;
    res = n +1;
    for(long i = 2; i < n; i++){
        res += n/i;
    }
    return res;
}

long long h(long long n){
    long long res = 0, x =0;
    if(memory[n] == -1){
        if(memory[n-1] == -1){
            return h(n-1);
        }
        else{
            res+=memory[n-1];
            x = calculo(n);
            memory[n] = x;
        }
    }
    else{
        res += memory[n];
        memory[n] = res;   
    }
    return memory[n];
}

int main(){
    int t;
    cin >> t;
    memset(memory,-1,sizeof(memory));

    while(t--){
        int n;
        cin >> n;
        long long res = h(n);
        cout << res << endl;
    }
}