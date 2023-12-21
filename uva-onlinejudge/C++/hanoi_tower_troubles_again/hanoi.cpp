#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (((n+1) * (n+1)) / 2) -1 << endl;
    }
    return 0;
}