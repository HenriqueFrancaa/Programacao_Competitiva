#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double tipos,bolso, n;
    cin >> tipos >> bolso;
    double dias = 0;

    for(int i = 0; i < tipos; i++){
        cin >> n;
        dias += ceil(n/bolso);
    }

    int cont = ceil(dias/2);

    cout << cont << endl;

    return 0;
}