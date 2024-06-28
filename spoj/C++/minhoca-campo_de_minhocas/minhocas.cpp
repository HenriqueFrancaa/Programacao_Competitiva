#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x; cin >> n >> m;
    vector<int>linhas (n,0);
    vector<int>colunas (m,0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            linhas[i]+=x;
            colunas[j]+=x;
        }
    }

    sort(linhas.begin(),linhas.end());
    sort(colunas.begin(),colunas.end());

    cout << max(linhas[linhas.size()-1],colunas[colunas.size()-1]) << endl;
    
    //https://br.spoj.com/problems/MINHOCA/
    //MINHOCA - Campo de Minhocas
    return 0;
}