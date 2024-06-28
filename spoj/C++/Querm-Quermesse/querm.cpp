#include <iostream>
using namespace std;

int main(){
    int n;
    int t = 1;
    while((cin >> n) && n){
        int num;
        for(int i = 1; i <= n; i++){
            cin >> num;
            if(num == i){
                cout << "Teste " << t << endl << num <<  endl << endl;
            }
        }
        t++;
    }
    //https://br.spoj.com/problems/QUERM/
    //QUERM - Quermesse

    return 0;
}