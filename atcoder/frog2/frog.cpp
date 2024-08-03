#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
int n,k;
vector<int>memo(MAX,-1);
vector<int>h;

int pd(int i){
    if(i == 0)return 0;
    if(memo[i] != -1)return memo[i];
    int ret = 1e9;
    for(int j = max(0,i-k); j < i; j++){
        ret = min(ret, pd(j) + abs(h[j] - h[i]));
    }
    memo[i] = ret;
    return ret;
}

int main(){
    cin >> n >> k;
    for(auto i = 0; i < n; i++){
        int x; cin >> x;
        h.push_back(x);
    }
    cout << pd(n-1) << endl;

    return 0;
}
