#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    string p;
    cin >> n >> k >> p;
    int sub;

    int r = 0, l = 0, a = 0;

    while(r < n){
        if(p[r] == 'a'){
            a++;
        }
        if(a <= k){
            sub = max(sub, r-l+1);    
        }
        while(a > k){
            if(p[l] == 'a'){
                a--;
            }
            l++;
        }
        r++;
    }

    r = 0, l = 0; int b = 0;

    while(r < n){
        if(p[r] == 'b'){
            b++;
        }
        if(b <= k){
            sub = max(sub, r-l+1);
        }
        while(b > k){
            if(p[l] == 'b'){
                b--;
            }
            l++;
        }
        r++;
    }

    cout << sub << endl;
    
    return 0;
}