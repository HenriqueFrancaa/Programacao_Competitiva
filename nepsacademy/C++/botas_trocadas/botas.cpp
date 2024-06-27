#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n; cin >> n;
    vector<pair<int,int>>botas (61,{0,0}); // {Esq,Dir}
        
    while(n--){
        int tam; char pe; cin >> tam >> pe;
        if(pe == 'E'){
            botas[tam].first++;
        }
        else{
            botas[tam].second++;
        }
    }

    int r = 0;
    
    for(int i = 0; i < botas.size(); i++){
        r += min(botas[i].first,botas[i].second);
    }

    cout << r << endl;

    return 0;
}
