#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; int ans = 0;
    vector<int>fat (11);
    fat[0] = 1;
    
    for(int i = 1; i < 11; i++){
        fat[i] = fat[i-1]*i;
    }
    
    cin >> n;
    for(int i = 10; i > 0; i--){
        int at = n/fat[i];
        ans += at;
        n -= at*fat[i];
    }
    cout << ans << endl;


    return 0;
}
