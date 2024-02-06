#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,x,score,result;
    cin >> n;
    vector<ll>num;
    for(int i = 0; i < n; i++){
        cin >> x;
        score += x;
        num.push_back(x);
    }    
    sort(num.begin(),num.end());

    for(int i = 0; i < n; i++){
        result += score;
        if(i != n-1){
            result += num[i];
        }
        score -= num[i];
    }
    cout << result << endl;
    //CodeForces - A. Appleman e Toastman
    //https://codeforces.com/contest/461/problem/A
    return 0;
}