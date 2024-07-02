#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;int n;cin >> k;
    vector<int>mes;
    for(int i = 0; i < 12; i++){
        cin >> n;
        mes.push_back(n);
    }

    sort(mes.begin(),mes.end(),greater<>());
    int cont = 0;
    for(int i = 0; i < 12; i++){
        if( k <= 0)break;
        k-=mes[i];
        cont++;
    }
    if(k<=0)cout << cont << endl;
    else cout << -1 << endl;

    return 0;
}