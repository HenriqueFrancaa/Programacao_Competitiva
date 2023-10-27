#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    long long a,b,k;
    int t, cont, n,x;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b >> k;
        n = a;
        int ac = 1;
        while(n <= b){
            if(n%k == 0){
                string num = to_string(n);
                for(int i = 0; i < num.size(); i++){
                    x += num[i] - '0';
                }
                if(x%k == 0){
                    cont++;
                    ac = k;
                }
                x = 0;
            }
            n += ac;
        }
        cout << cont << endl;
        cont = 0;
    }
    // TIME LIMITED!!!!! :(
    return 0;
}