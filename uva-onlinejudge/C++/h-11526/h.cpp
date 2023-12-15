#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int res = 0,n;
        cin >> n;
        res = n+1;
        for(int i = 2; i < n; i++){
            res += n/i;
        }
        cout << res << endl;
    }
}