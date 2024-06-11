#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdlib.h>
using namespace std;

typedef long long ll;

int main(){
    ll n,a,b,c;
    cin >> n;
    vector<ll>sum;// total power of jedi
    vector<ll>weak;// weak point of jedi
    vector<ll>battle;// battles won of each jedi

    for(int i = 0; i < n; i++){
        //cin >> a >> b >> c;
        scanf("%lld %lld %lld", &a, &b, &c);
        ll mx = max(a,b);
        mx = max(mx,c);
        weak.push_back(a+b+c-mx+2);
        sum.push_back(a+b+c);

        if(sum[i] >= weak[i]){
            battle.push_back(-1);
        }
        else{
            battle.push_back(0);
        }
    }

    sort(weak.begin(),weak.end());

    for(int i = 0; i < n; i++){
        int cont = upper_bound(weak.begin(),weak.end(),sum[i]) - weak.begin();

        battle[i] += cont;
    }

    for(int i = 0; i < n; i++){
        if(i == n-1){
            //cout << battle[i];
            printf("%lld", battle[i]);
        }
        else{
            //cout << battle[i] << " ";
            printf("%lld ",battle[i]);
        }
    }cout << endl;

    return 0;
}
