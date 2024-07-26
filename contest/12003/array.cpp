#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){
    ll n,m,u,l,r,v,p,k;
    cin >> n >> m >> u;
    vector<vector<ll>>A;
    vector<ll>aux;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        aux.push_back(x);
    }
    for(int i = 0; i < m; i++){
        A.push_back(aux);
        cin >> l >> r >> v >> p;
        k = 0;
        l--,r--,p--;
        sort(A[i].begin()+l,A[i].begin()+r+1);
        ll busca = lower_bound(A[i].begin()+l,A[i].begin()+r+1,v) - A[i].begin();
        //if(A[i][busca] < v)k++;
        k += busca-l;
        A[i][p] = (u * k)/(r-l+1);
        aux[p] = A[i][p]; 
    }

    for(int i = 0; i < n; i++){
        cout << aux[i] << endl;
    }



    return 0;
}