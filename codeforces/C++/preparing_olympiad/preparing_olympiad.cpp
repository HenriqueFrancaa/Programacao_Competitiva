#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

int main(){
    ll q,l,r,x, n,cont, ans = 0;
    ll mn; ll mx = 0;
    vector<ll>v;

    cin >> q >> l >> r >> x;
    for(int i = 0; i < q; i++){
        cin >> n;
        v.push_back(n);
    }

    for(int i = 0; i <= (1<<q)-1; i++){
        cont = 0;
        mn = 10000000;
        mx = 0;
        for(int j = 0; j < q; j++){
            if(i & (1 << j)){
                cont += v[j];
                mn = min(mn,v[j]);
                mx = max(mx,v[j]);
            }
        }
        if((cont >= 1) && ((mx - mn) >= x) && (cont >= l) && (cont <= r)){
            ans++;
        }
    }

    cout << ans << endl;
    //CodeForces B.Preparing Olypiad
    //https://codeforces.com/problemset/problem/550/B 
    return 0;
}