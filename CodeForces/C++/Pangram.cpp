#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    string palavra;
    int cont = 0;

    cin >> t;
    cin >> palavra;

    char m = 97;
    char M = 65;

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < t; j++){
            if(palavra[j] == m){
                cont++;
                break;
            }
            else if(palavra[j] == M){
                cont++;
                break;
            }
        }
        m++;
        M++;
    }

    if(cont == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}