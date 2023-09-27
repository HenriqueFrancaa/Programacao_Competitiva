#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    string p;
    cin >> n >> k >> p;
    int sub;

    int i = 0, j = 0, a = 0;

    while(i < n){
        if(p[i] == 'a'){
            a++;
        }
        if(a <= k){
            sub = max(sub, i-j+1);    
        }
        while(a > k){
            if(p[j] == 'a'){
                a--;
            }
            j++;
        }
        i++;
    }


    i = 0, j = 0; int b = 0;
    while(i < n){
        if(p[i] == 'b'){
            b++;
        }
        if(b <= k){
            sub = max(sub, i-j+1);
        }
        while(b > k){
            if(p[j] == 'b'){
                b--;
            }
            j++;
        }
        i++;
    }

    cout << sub << endl;

    return 0;
    //Vasya and String ---> Codeforces
}