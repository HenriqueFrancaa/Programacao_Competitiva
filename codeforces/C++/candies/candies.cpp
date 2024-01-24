#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>
using namespace std;

typedef long long ll;

ll n,k; ll mn = 1000000000000000000;

bool validate(ll m){
    ll sum = 0;
    ll candies = n;
    while (candies > 0)
    {
        ll eat = min(candies,m);
        sum += eat;
        candies -= eat;
        candies -= candies/10;
    }
    return sum * 2 >= n;
}

ll busca(ll n){
    ll low = 1, high = n, mid = 0;
    while(low <= high){
        mid = (low + high)/2;
        if(validate(mid)){
            if(mid < mn){
                mn = mid;
            }
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return mn;
}

int main(){
    cin >> n;
    cout << busca(n) << endl;
    return 0;
    //CodeForces - C. Candies
    //https://codeforces.com/problemset/problem/991/C
}