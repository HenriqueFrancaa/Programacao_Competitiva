#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,h;

int main(){
    cin >> n >> h;
    vector<ll>start,end;
    for(int i = 0; i < n; i++){
        int s,e;
        cin >> s >> e;
        start.push_back(s);
        end.push_back(e);
    }
    
    vector<ll>plan,qued;
    plan.push_back(0);
    qued.push_back(0);
    for(int i = 1; i <= n; i++){
        plan.push_back(end[i-1] - start[i-1] + plan[i-1]); //acumulando quanto ele já planou até o momento
        if(i == n){
            qued.push_back(1e9);
            break;
        }
        qued.push_back(start[i] - end[i-1] + qued[i-1]); //acumulando o quanto o glider ja caiu até o momento
    }
    
    ll mx = h;
    ll j = 0;
    for(int i = 0; i <= n; i++){
        while(qued[j] - qued[i] < h && j != n){
            j++;
        }
        mx = max(mx, h + plan[j] - plan[i]);
    }

    cout << mx << endl;
    
    //CodeForces -> D. Glider
    //https://codeforces.com/problemset/problem/1041/D

    return 0;
}
