#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int fatorial(int n){
    if(n == 1){
        return 1;
    }
    return n * fatorial(n-1);
}

int main(){
    int a,b,mn;
    cin >> a >> b;
    mn = min(a,b);
    cout << fatorial(mn) << endl;
    return 0;
    //Codeforces - A. I'm bored with life
    //https://codeforces.com/problemset/problem/822/A
}