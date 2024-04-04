#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string bin = "";

void binary(int n){
    while(n > 0){
        bin += (n % 2) + '0';
        n /= 2;
    }
}

int decimal(int n){
    bin.clear(); binary(n);
    int count = 0;
    for(int i = 0; i < bin.size(); i++){
        if(bin[i] == '1'){ count++; }
    }
    return count;
}

int hexa(int n){
    string h = to_string(n);
    int hex = 0;
    for(int i = 0; i < h.size(); i++){
        hex += (h[i] - '0') * pow(16, h.size()-1-i);
    }
    return decimal(hex);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int b1 = decimal(n);
        int b2 = hexa(n);
        cout << b1 << " " << b2 << endl;
    }

    return 0;
}