#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool primos[201];
vector<int>semi;

void primes(){
    primos[0] = false;
    primos[1] = false;
    primos[2] = true;

    for(int i = 3; i <= 200; i++){
        bool validate = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i%j == 0){
                validate = false;
                break;
            }
        }
        primos[i] = validate;
    }
}

void semiprimes(){
    for(int i = 2; i <= 200; i++){
        for(int j = i+1; j <= 200; j++){
            if((primos[i] && primos[j])){
                semi.push_back(i * j);
            }
        }
    }
}


int main(){
    primes();
    semiprimes();
    int t,n;
    bool validate;
    cin >> t;
    while(t--){
        cin >> n;
        validate = false;
        for(int i = 0; i < semi.size(); i++){
            for(int j = 0; j < semi.size(); j++){
                if(semi[i] + semi[j] == n){
                    validate = true;
                }
            }
        }
        if(validate){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}