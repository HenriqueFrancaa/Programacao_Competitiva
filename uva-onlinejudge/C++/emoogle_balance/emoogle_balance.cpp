#include <iostream>
using namespace std;

int main(){
    int n;
    int j = 1;
    while(true){
        int t;
        int treat = 0, cont = 0;
        cin >> t;
        if(t == 0)break;

        for(int i = 0; i < t; i++){
            cin >> n;
            if(n != 0){
                treat++;
            }
            else{
                cont++;
            }
        }
        int emoogle = treat - cont;
        cout << "Case " << j << ": " << emoogle << endl;
        j++;
    }
    return 0;
}