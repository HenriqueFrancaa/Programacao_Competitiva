#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

typedef long long ll;

ll k,n,a,b;
ll mx = -1;

bool veri(ll mid){
    ll newk = k - (mid * a);
    if(((n - mid) * b) >= newk){
        return false;
    }
    return true;
}

ll busca(){
    ll low = 0; ll high = n; ll mid = 0;
    while(low <= high){
        mid = (low+high)/2;
        if(veri(mid) == true){
            if(mid > mx){
                mx = mid;
            }
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return mx;
}

int main(){
    ll q;
    cin >> q;
    while(q--){
        cin >> k >> n >> a >> b;
        if(k - (n * a) > 0)cout << n << endl;
        else{
            ll res = busca();
            cout << mx << endl;
        }
        //num.clear();
        mx = -1;
    }
    return 0;
    //CodeForces - 1183C - Computer Game
    //https://codeforces.com/problemset/problem/1183/C
}