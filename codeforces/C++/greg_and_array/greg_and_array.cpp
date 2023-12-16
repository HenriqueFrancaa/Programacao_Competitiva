#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
using namespace std;

typedef long long ll;
ll n,m,k,x,y;
int main(){
    cin >> n >> m >> k;
    ll prov[n]; // array provisoria
    ll array[n]; //array principal
    ll q[m];//queries provisoria
    ll queries[m];//queries principal
    ll operations[m][3]; // todas as operações

    memset(q,0,sizeof(q));
    memset(prov,0,sizeof(prov));
    memset(queries,0,sizeof(queries));

    for(int i = 0; i < n; i++){
        cin >> array[i]; // montando o array
    }
    for(int i = 0; i < m; i++){ //preenchendo a matriz das operações
        for(int j = 0; j < 3; j++){
            cin >> operations[i][j];
        }
    }

    for(int i = 0; i < k; i++){
        cin >> x >> y;
        q[x-1]++;
        if(y < m){
            q[y]--;
        }
    } // formando os novos valores para cada operação

    ll sum = 0;
    for(int i = 0; i < m; i++){
        sum += q[i];
        queries[i] = sum;
    }

    for(int h = 0; h < m; h++){
        operations[h][2] *= queries[h]; //colocando os novos valores para cada operação
    }
    
    for(int i = 0; i < m; i++){
        int l = operations[i][0], r = operations[i][1];
        prov[l-1] += operations[i][2];
        if(r < n){
            prov[r] -= operations[i][2];
        }
    }

    sum = 0;
    for(int i = 0; i < n; i++){
        sum += prov[i];
        array[i] += sum;
    }

    /*
    */
    for(int j = 0; j < n; j++){
        cout << array[j] << " ";
    }cout << endl;

    //CodeForces - A. Greg and Array
    //https://codeforces.com/problemset/problem/295/A
    return 0;
}