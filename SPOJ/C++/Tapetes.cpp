#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long l,n;
    cin >> l >> n;

    long long result = pow((l - (n-1)),2) + (n-1);

    cout << result;

    return 0;
}