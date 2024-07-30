#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    int r,c,m,n,x = 1;
    while(t--){
        cin >> r >> c >> m >> n;
        vector<int>prioridade(26,0);
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                char l; cin >> l;
                prioridade[l-65]++;
            }
        }

        sort(prioridade.begin(),prioridade.end());
       
        int bytes = 0; int ant = prioridade[25];
        for(auto i = 25; i >= 0; i--){
            if(i == 25){
                bytes+=(prioridade[i]*m);
            }
            else if(prioridade[i] == ant){
                bytes+=(prioridade[i]*m);
            }
            else{
                bytes+=(prioridade[i]*n);
            }
            
        }
        cout << "Case " << x << ": " << bytes << endl;
        x++;
    }
    //https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2635
    //Image Coding - UvaOnlineJudge
    return 0;
}
