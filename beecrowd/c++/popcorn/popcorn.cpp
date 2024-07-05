#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,c,t;
const int MAX = 1e5+10;

int v[MAX];

bool validate(ll m){
    ll comp = 1;
    ll resta = t*m;

    for(int i = 0; i < n; i++){
        if(resta >= v[i]){
            resta -= v[i];
        }
        else{
            resta = t*m;
            comp++;
            i--;
        }
        if(comp > c)return false;
    }
    return true;

}


int main(){
    cin >> n >> c >> t;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int s = 0, e = 1e9;
    while(s < e){
        int m = (s+e)/2;
        if(!validate(m))s = m+1;
        else{
            e = m;
        }
    }

    cout << s << endl;

    return 0;
}