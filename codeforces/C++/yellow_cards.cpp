#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ta,tb,ka,kb,n;
    int mx=0,mn=0,r;
    cin >> ta >> tb >> ka >> kb >> n;

    r = ta*ka;
    mx += ta;
    n -= r;
    while(true){
        r = tb * kb;
        if(r < n){
            n -= r;
            mx += tb;
            break;
        }
        else{
            tb--;
        }
    }
    cout << mx << endl;

    return 0;
}