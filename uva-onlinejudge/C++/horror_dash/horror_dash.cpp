#include <iostream>
using namespace std;

int main(){
    int t,n,s;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        int max = 0;
        for(int j = 0; j < n; j++){
            cin >> s;
            if(s > max){
                max = s;
            }
        }
        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}