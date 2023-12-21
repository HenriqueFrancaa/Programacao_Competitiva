#include <iostream>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;

bool veri(int n){
    int sq = sqrt(n);
    if(sq * sq == n)return true;
    else{
        return false;
    }
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cont = 1;
        bool pode = true;
        int stacks[n];
        memset(stacks,0,sizeof(stacks));
        stacks[0] = 1;
        for(int i = 2; i < 1000000; i++){
            if(pode == true){
                for(int j = 0; j < n; j++){
                    if(stacks[j] == 0){
                        stacks[j] = i; 
                        cont++; 
                        break;
                    }
                    int sq = i + stacks[j];
                    if(veri(sq) == true){
                        stacks[j] = i;
                        cont++;
                        break;

                    }
                    else if(j == n-1){
                        pode = false;
                    }
                    //break;
                }
            }
        }
        cout << cont << endl;
        
    }
    // Uva 10276 - Hanoi Tower Troubles Again
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1217
    return 0;
}