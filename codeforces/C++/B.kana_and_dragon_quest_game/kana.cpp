#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int h,a,l; cin >> h >> a >> l;
        l *= 10;
        if(l >= h)cout << "YES" <<  endl;

        else{
            while(a >= 0){
                if(h <= 0)break;
                if(h <= l){
                    h -= l;
                    break;
                }
                h = (h/2)+10;
                a--;
            }
            if(h == 0)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    return 0;
}