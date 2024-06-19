#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

int main(){
    int n;cin >> n;
    ll x;
    while(n--){
        cin >> x;
        bool prime = true;
        for(int j = 2; j*j <= x; j++){
            if(x%j == 0){
                prime = false;
                break;
            }
        }
        if(prime) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}
