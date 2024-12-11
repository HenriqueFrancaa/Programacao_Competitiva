#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,x,y,t;cin >> t;
    while(t--){
        cin >> a >> b >> x >> y;

        int l,c;
        l =  max(a-(x+1), a-(a-x)) * b;
        c =  max(b-(y+1), b-(b-y)) * a;
        cout << max(l,c) << endl;
    }

    return 0;
    //CodeForces - A.DeadPixel
    //https://codeforces.com/contest/1315/problem/A
}