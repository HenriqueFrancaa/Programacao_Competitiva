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
    //Uva 10276 - Hanoi Tower Troubles Again
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1217
}