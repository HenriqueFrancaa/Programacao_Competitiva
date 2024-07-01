#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a,b,c;
        cin >> a >> b >> c; bool validate = true;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != c[i] && c[i] != b[i])validate = false;
        }
        if(validate)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}