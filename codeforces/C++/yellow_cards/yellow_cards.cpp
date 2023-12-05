#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,ka,kb,c, mx = 0;
    cin >> a >> b >> ka >> kb >> c;
    int mn = (a * (ka-1)) + b * (kb-1);
    if(mn >= c){
        cout << 0 << ' ';
    }
    else{
        mn = c - mn;
        cout << mn << ' '; 
    }
    
    if(ka < kb){
        mx = min(a,c/ka);
        c -= mx * ka;
        mx += min(b,c/kb);
    }
    else{
        mx = min(b,c/kb);
        c -= mx * kb;
        mx += min(a,c/ka);
    }

    cout << mx << endl;
    //Code Forces -> A. Yellow Cards
    //https://codeforces.com/contest/1215/problem/A
    return 0;
}