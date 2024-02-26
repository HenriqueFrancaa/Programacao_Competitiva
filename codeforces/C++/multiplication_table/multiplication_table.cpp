#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

typedef long long ll;

ll n,m,k,res;

bool validate(ll mid){
    ll cont = 0;
    for(int i = 1; i <= n; i++){
        cont += min(mid/i, m);
    }
    if(cont >= k)return false;
    return true;
}

ll busca(ll low,ll high){
    ll mid = (low+high)/2;
    if(low > high){
        return res;
    }
    if(validate(mid)){
        return busca(mid+1,high);
    }
    res = mid;

    return busca(low,mid-1);
    
}

int main(){
    cin >> n >> m >> k;
    res = 0;
    cout << busca(1,k) << endl;
    //CodeForces - Multiplication table
    return 0;
}