#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main(){
    ll c1,c2,x;

    while((cin >> c1 >> c2) && (c1 != -1 && c2 != -1)){
        if(abs(c1 - c2) > 50){
            if(c1 > c2){
                x = abs(100+c2 - c1);
            }
            else{
                x = abs(100+c1- c2);
            }
            cout << x << endl;
        }
        else{
            cout << abs(c2-c1) << endl;
        }
    }
    return 0;
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912
    //12468 UVa-Online-Judge
}