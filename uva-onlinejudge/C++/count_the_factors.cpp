#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int cont = 0;
bool primo = true;
void veri(int x){
    int b = 0;
    for(int i = 2; i <= sqrt(x); i++){
        if(x%i == 0){
            primo = false;
            break;
        }
    }
}

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0)break;

        for(int i = 2; i <= n; i++){
            primo = true;
            if(n%i == 0){
                veri(i);
                if(primo == true){
                    cont++;
                }
            }
        }
        cout << n << " : " << cont << endl;
        cont = 0;
        primo = true;
    }
    return 0;
}