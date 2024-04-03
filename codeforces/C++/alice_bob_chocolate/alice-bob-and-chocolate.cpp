#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

typedef long long ll;

int main(){
    ll n,t;
    cin >> n;
    ll a = 0, b = 0;
    vector<ll>barras;

    for(int i = 0; i < n; i++){
        cin >> t;
        barras.push_back(t);
    }
    int i = 0, j = barras.size()-1;
    while( i <= j){
        if(i == j){
            a++;
            break;
        }
        if((barras[i] - barras[j]) < 0){
            barras[j] -= barras[i]; 
            i++;
            a++;
            if(i == j-1){
                a++;
                b++;
                break;
            }
        }
        else if((barras[i] - barras[j]) > 0){
            barras[i] -= barras[j];
            j--;
            b++;
            if(j == i+1){
                b++;
                a++;
                break;
            }
        }
        else if((barras[i] - barras[j]) == 0) {    
            i++;
            j--;
            b++;
            a++;
            
        }

    }
    cout << a << " " << b << endl;
    return 0;
    //CodeForces -> C. Alice, Bob and Chocolate
    //https://codeforces.com/contest/6/problem/C
}