#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;cin >> n;
    map<string,bool>mp;
    vector<string>v;
    
    while(n--){
        string name;cin >> name;
        v.push_back(name); mp[name] = true;
    }

    for(int i = v.size()-1; i >= 0; i--){
        if(mp[v[i]] == true)cout << v[i] << endl; mp[v[i]] = false;    
    }


    return 0;
}