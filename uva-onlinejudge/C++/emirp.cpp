#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool primo(int n){
    for(int i = 2; i <= sqrt(n); i++ ){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    string n;
    while(cin >> n){
        int v,x;
        for(int i = 0; i < n.size(); i++){ // colocando o número de trás pra frente
            v = n[i] - '0';
            x +=(v * pow(10,i));
        }

        int h,z;
        for(int i = 0; i < n.size(); i++){ // colocando o número de frente pra trás
            z = n[i] - '0';
            h += (z *pow(10,(n.size()-1)-i));
        }

        bool p1, p2;

        if(h != x){
            p1 = primo(x);
            p2 = primo(h);
        }
        else{
            p2 = primo(h);
            p1 = false;
        }

        if(p1 == true && p2 == true){
            cout << h << " is emirp." << endl;
        }
        else if(p1 == false && p2 == true){
            cout << h << " is prime." << endl;
        }
        else{
            cout << h << " is not prime." << endl;
        }

        x = 0;
        h = 0;
    }
    return 0;

    // Uva - OnlineJudge --> 10235 Simply emirp
}
