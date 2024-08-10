#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    int t,n,x;cin >> t;
    while(t--){
        cin >> n;
        vector<int>v(n,0);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        
        int j = 1;
        int descount = 0;  
        for(int i = n-1; i >=0; i--){
            if(j == 3){
                descount += v[i];
                j = 0;
            }
            j++;
        }
        cout << descount << endl;
    }
    return 0;
}
