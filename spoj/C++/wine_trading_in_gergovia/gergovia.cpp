#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
typedef long long int ll;

int main(){

    int n,x;
    while(true){
        cin >> n;
        if(n == 0)break;
        ll cont = 0;
        vector<ll>wine;
        for(int i = 0; i < n; i++){
            cin >> x;
            wine.push_back(x);
        }
        wine.push_back(0);
        for(int i = 0; i < n; i++){
            if(wine[i] >= 0){
                cont += wine[i];
            }
            else{
                cont -= wine[i];
            }
            wine[i+1] += wine[i];
        }
        cout << cont << endl;
    }
    return 0;
}
