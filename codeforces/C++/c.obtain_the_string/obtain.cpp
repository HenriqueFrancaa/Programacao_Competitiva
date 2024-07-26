#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int op = 1;
        string s,t;
        vector<vector<int>>v(26); //formando a matriz em base dos index de cada letra
        cin >> s >> t;
        for(int i = 0; i < s.size(); i++){
            v[s[i]-'a'].push_back(i);
        }
        int i = 0;
        for(int j = 0; j < t.size(); j++){
            int pos = upper_bound(v[t[j]- 'a'].begin(),v[t[j]-'a'].end(),i) - v[t[j]-'a'].begin();
            int ps = vh;
            int ps = vh;
            int ps = vh;
            int ps = vh;
            int ps = vh;
        }

    }
    return 0;
}