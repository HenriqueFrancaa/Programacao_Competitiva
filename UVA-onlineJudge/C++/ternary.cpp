#include <iostream>
#include <cmath>

using namespace std;

void Ternary(int N){
    if (N == 0){ return; }
    int x = N % 3;
    N = N / 3;
    if (x < 0){ N += 1; }
    Ternary(N);
 
    if(x < 0){ cout << x + (3 * -1); }
    else{ cout << x; }
}

int main(){
    int N;
    while(cin >> N && N >= 0){
        if(N == 0){ cout << 0 << endl; }
        else{
            Ternary(N);
            cout << endl;
        }
    }
 
    return 0;
}