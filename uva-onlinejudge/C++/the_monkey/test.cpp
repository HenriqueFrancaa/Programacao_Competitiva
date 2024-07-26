#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>
using namespace std;

typedef long long ll;

vector<ll>stairs;

ll mx;

bool validate_k(ll k){
    bool val = true;
    bool p = true;
    if(k < (stairs[0]))return false;
    for(int i = 0; i < stairs.size()-1; i++){
        
        if(stairs[i+1]-stairs[i] == k){
            k--;
        }
        else if(stairs[i+1] - stairs[i] > k)return false;
        else if(k == 0)return false;
    }
    return val;
}
void bs(){
    ll low = 0, high = mx;
    ll mid = 0;

    while(low <= high){
        mid = (low + high)/2;
        if(validate_k(mid)){
            if(mid < mx){
                mx = mid;
            }
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

}


int main(){
    ll t,n,x,c =1;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            stairs.push_back(x);
        }
        if(n == 1){
            mx = stairs[0];
        }
        
        else if(n == 2){
            ll dif = stairs[n-1] - stairs[0];
            if(dif < stairs[0]){
                mx = stairs[0];
            }
            else if(dif == stairs[0]){
                mx = dif+1;
            }else{
                mx = dif;
            }
        }
        else{
            mx = stairs[n-1];
            bs();   
        
        cout << "Case " << c << ": " <<  mx << endl;
        stairs.clear();
        c++;
    }
    }
    return 0;
}