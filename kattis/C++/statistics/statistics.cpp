#include <iostream>
using namespace std;

int main(){
    int s,n,x;
    int i = 1;
    while(cin >> s ){
        int maior= -1000000001,menor = 100000001;
        for(int i = 0; i < s; i++){
            cin >> x;
            if(x > maior){
                maior = x;
            }
            if(x < menor){
                menor = x;
            }
        }
        int dif = maior - menor;
        cout << "Case " << i << ": " << menor << " " << maior << " " << dif << endl;
        i++;
    }
    return 0;
}
