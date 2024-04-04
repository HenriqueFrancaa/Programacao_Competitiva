#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int>numbin;

void binario(int n){
    int resto;
    int x;
    while(n >= 2){
        x = n/2;
        numbin.push_back(n%2);
        n /= 2;
    }
    numbin.push_back(n);
    for(int i = numbin.size()-1; i >= 0; i--){
        cout << numbin[i];
    }cout << endl;
}

int main(){
    int n;
    while(cin >> n){
        binario(n);
        numbin.clear();
    }
    return 0;
}