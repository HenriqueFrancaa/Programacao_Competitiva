#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MAX = 1e10;

int n,w;
vector<int>peso,valor;
ll memo[110][100010];

ll knapsack(int item, int cap){
    if(cap < 0)return -MAX;
    if(item == n)return 0;
    ll &p = memo[item][cap];
    if(p != -1)return p;

    return p = max(knapsack(item+1,cap),knapsack(item+1,cap-peso[item])+valor[item]);
}

int main(){
    cin >> n >> w;
    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        peso.push_back(x);
        valor.push_back(y);
    }
    
    memset(memo,-1,sizeof(memo));

    cout << knapsack(0,w) << endl;

    return 0;
}
