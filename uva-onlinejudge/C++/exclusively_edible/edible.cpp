#include <iostream>
using namespace std;

int main(){
    int t,m,n,r,c;
    cin >> t;

    while(t--){
        cin >> m >> n >> r >> c;
        bool val = false; // true = gretel  false = hansel

        while(m != 1 && n != 1){
            if(m > n){
                m--;
            }
            else if(m <= n){
                n--;
            }
            if(val) val = false;
            else val = true;
        }
        if(val) cout << "Hansel" << endl;
        else cout << "Gretel" << endl;

    }
    return 0;
}