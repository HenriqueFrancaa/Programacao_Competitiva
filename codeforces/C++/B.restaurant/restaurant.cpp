#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a , pair<int,int>b){
    return a.second < b.second;
}

int main(){
    int n;cin >> n;
    vector<pair<int,int>>orders;
    while(n--){
        int a,b; cin >> a >> b;
        orders.push_back(make_pair(a,b));
    }

    sort(orders.begin(),orders.end(),comp);
    int cont = 0;
    int fim = -1;

    for(int i = 0; i < orders.size(); i++){
        if(orders[i].first > fim){
            fim = orders[i].second;
            cont++;
        }
    }
    cout << cont << endl;
    // B.RESTAURANT
    //https://codeforces.com/contest/597/problem/B
    return 0;
}