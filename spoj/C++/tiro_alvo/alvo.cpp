#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
using namespace std;

typedef long long ll;

ll c;
vector<ll>raios;

ll alvo(ll x){
    ll high = raios.size()-1,low = 0, mid =0; ll pont = 0;
    if(x > raios[high])return 0;
    while(low < high){
        mid = (high+low)/2;
        if(x <= raios[mid]){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return c-high;
}

int main(){
    ll t,n,x,y, cont = 0;
    cin >> c >> t;
    for(ll i = 0; i < c; i++){
        cin >> n; // raio
        raios.push_back(n);
        raios[i] *= n; // formando o diametro r**2;
    }

    for(ll i = 0; i < t; i++){
        cin >> x >> y; 
        cont += alvo(x*x + y*y);
    }
    cout << cont << endl;

    return 0;
}