#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n, money = 0, a , p;
    cin >> n;
    int min = 100;

    for(int i = 0; i < n; i++){
        cin >> a >> p;
        if(p < min){
            min = p;
        }
        money += a * min;
    }

    cout << money << endl;

    //https://codeforces.com/contest/588/problem/A 
    //A duff and meat
    return 0;
}
