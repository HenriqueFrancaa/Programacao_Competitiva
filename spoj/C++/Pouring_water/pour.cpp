#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int pour(int a,int b,int c){
    int A = a,B = 0;
    int stp = 1;
    while(A != c || B != c){
        int dif = min(A,b-B);
        A -= dif;
        B += dif;
        stp++;
        if(A == c || B == c)return stp;
        if(A == 0){
            A = a;
            stp++;
        }
        if(B == b){
            B = 0;
            stp++;
        }
    }
    return stp;
}

int main(){
    int a,b,c,t; cin >> t;

    while(t--){
        cin >> a >> b >> c;
        if(a == c || b == c) {
            cout << 1 << endl;
        }
        else if(c > a && c > b)cout << -1 << endl;
        else if(c % __gcd(a,b) != 0)cout << -1 << endl;
        else{
           cout << min(pour(a,b,c),pour(b,a,c)) << endl; 
        }
    }    

    //POUR1 - Pouring water
    //https://www.spoj.com/problems/POUR1/

    return 0;
}