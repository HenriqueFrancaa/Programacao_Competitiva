#include <bits/stdc++.h>
using namespace std;

int const MAX = 1e3+10;

vector<vector<int>>g (MAX);
vector<bool>v (MAX,false);

void dfs(int m){
    v[m] = true;

    for(auto x : g[m]){
        if(!v[x]){
            dfs(x);
        }
    }
}

int main(){
    int n,m; cin >> n >> m;
    for(int c = 0; c < m; c++){
        int i,j; cin >> i >> j; i--,j--;
        g[i].push_back(j);
        g[j].push_back(i);
    }

    int times = 0;

    for(int i = 0; i < n; i++){
        if(!v[i]){
            dfs(i);
            times++;
        }
    }
    cout << times << endl;

    return 0;
    //https://neps.academy/br/exercise/309
    //Gincana (OBI 2011)
}