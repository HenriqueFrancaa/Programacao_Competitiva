#include <iostream>
using namespace std;

int main(){
    int x,y,b1,h1,b2,h2;
    cin >> x >> y;
    cin >> b1 >> h1;
    cin >> b2 >> h2;

    bool resposta = false;

    while(resposta == false){
        if(b1+b2 <= y && h1 <= x && h2 <= x){
            resposta = true;
            break;
        }
        else if(b1 + b2 <= x && h1 <= y && h2 <= y){
            resposta = true;
            break;
        }
        else if(h1+h2 <= x && b1 <= y && b2 <= y){
            resposta = true;
            break;
        }
        else if(h1+h2 <= y && b1 <= x && b2 <= x){
            resposta = true;
            break;
        }
        else if(b1 + h2 <= x && h1 <= y && b2 <= y){
            resposta = true;
            break;
        }
        else if(b1 + h2 <= y && h1 <= x && b2 <= x){
            resposta = true;
            break;
        }
        else if(b2+h1 <= x && h2 <= y && b1 <= y){
            resposta = true;
            break;
        }
        else if(b2+h1 <= y && h2 <= x && b1 <= x){
            resposta = true;
            break;
        }
        break;
    }

    if(resposta == true){
        cout << 'S' << endl;
    }
    else{
        cout << 'N' << endl;
    }

    return 0;
}