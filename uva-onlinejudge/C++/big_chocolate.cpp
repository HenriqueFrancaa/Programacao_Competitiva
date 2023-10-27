#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m){
        int c = n * m;
        c--;
        cout << c << endl;
    }
    return 0;
}