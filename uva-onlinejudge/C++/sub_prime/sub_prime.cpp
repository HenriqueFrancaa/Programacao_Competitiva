#include <iostream>
#include <vector>
using namespace std;

int main(){
    int b,n,x;
    while(true){
        cin >> b >> n;
        int d,l,p;
        if(b == 0 && n == 0)break;
        int debentures[b+1];
        debentures[0] = 0;
        for(int i = 1; i <= b; i++){
            cin >> x;
            debentures[i] = x;
        }

        for(int i = 0; i < n; i++){
            cin >> d >> l >> p;
            debentures[l] += p;
            debentures[d] -= p;
        }
        bool veri = true;
        for(int i = 1; i < (b+1); i++){
            if(debentures[i] < 0){
                veri = false;
                break;
            }
        }
        if(veri == true)cout << 'S' << endl;
        else cout << 'N' << endl;

    }
    return 0;
    // UVA 11679 - Sub-prime 
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726
}