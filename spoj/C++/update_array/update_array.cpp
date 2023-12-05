#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, u,l,r,v,q,h;
        cin >> n >> u;
        int array[n];
        memset(array,0,sizeof(array));
        for(int i = 0; i < u; i++){
            cin >> l >> r >> v;
            array[l] += v;
            array[r+1] -= v;
        }
        int sum = 0;
        int res[n];
        for(int i = 0; i < n; i++){
            res[i] = sum+array[i];
            sum += array[i];
        }
        
        cin >> q;
        while(q--){
            cin >> h;
            cout << res[h] << endl;
        }   
    }
    //SPOJ - UPDATEIT - Update the array!
    //https://www.spoj.com/problems/UPDATEIT/
    return 0;
}