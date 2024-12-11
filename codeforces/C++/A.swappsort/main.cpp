#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s;cin >> s;
    vector<int>v;
    vector<pair<int,int>>swaps;
    for(int i = 0 ; i < s; i++){
        cin >> n;
        v.push_back(n);
    }
    int i = 0,j = 0, m, pos,aux;
    while(i < v.size()){
        j = i+1;
        m = 1e9;
        while (j < v.size()){
            if(v[j] < m){
                m = v[j];
                pos = j;
            }
            j++;
        }
        if(v[i] > m){
            aux = v[i];
            v[i] = v[pos];
            v[pos] = aux;
            swaps.push_back(make_pair(i,pos));
        }
        i++;
    }

    cout << swaps.size() << endl;
    if(!swaps.empty()){
        for(int i = 0; i < swaps.size(); i++){
            cout << swaps[i].first << " " << swaps[i].second << endl;
        }
    }

    return 0;
}