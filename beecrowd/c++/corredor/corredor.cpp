#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int>v (n);
    for(int i = 0; i < n; i++){
        int x;cin >> x;
        v.push_back(x);
    }
    
    int soma_ant = -100;
    int ans = -100;

    for(int i = 0; i < v.size(); i++){
        if(soma_ant < 0){
            soma_ant = 0;
        }
        soma_ant += v[i];
        ans = max(soma_ant,ans);
    }
    cout << ans << endl;

    return 0;
}