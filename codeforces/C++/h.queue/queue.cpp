#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cmath>
#include <utility>
using namespace std;
typedef long long ll;

ll n,k,f,troco,total;
vector<ll>din;   
vector<pair<ll,ll>>caixa;

bool veri(ll troco){
    for(int i = 4; i >= 0; i--){
        while(caixa[i].second != 0 && troco >= caixa[i].first){
            caixa[i].second--;
            troco -= caixa[i].first;
        }
    }
    return troco == 0;
}

int main(){
    caixa.push_back(make_pair(1,0));
    caixa.push_back(make_pair(5,0));
    caixa.push_back(make_pair(10,0));
    caixa.push_back(make_pair(20,0));
    caixa.push_back(make_pair(50,0));
    bool validate = true;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        total = 0;
        for(int j = 0; j < 5; j ++){
            cin >> f;
            total += (f * caixa[j].first);
            din.push_back(f);
        }
        troco = total - k;
        if(troco != 0){
            if(!veri(troco)){
                validate = false;
            }        
        }
        else{
            for(int j = 0; j < din.size(); j++){
                caixa[j].second += din[j];
            }
        }
        din.clear();
    }
    if(!validate)cout << "no" << endl;
    else cout << "yes" << endl;
    
    return 0;
    //CodeForces -> H. Queue (A)
    //https://codeforces.com/gym/100989/problem/H
}
