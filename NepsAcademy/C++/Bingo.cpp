#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int>numeros;
vector<int>veri;
int cont = 0;

int analise2(int numero, int bola){ // função para ver se a diferença absoluta está na array
    int anunciado;
    for(int i = 0; i < bola-1; i++){
            for(int j = i; j < bola-1; j++){
                anunciado = abs(numeros[i] - numeros[j+1]);
                for(int h = 0; h < veri.size();h++){
                    if(anunciado == veri[h]){
                        veri[h] = -1;
                        cont++;
                        break;
                    }
                }
            }
        }
    return cont;
}

int analise(int numero, int bola){ // função para ver se o numero está na array
    for(int i = 0; i < bola; i++){
        for(int j = 0; j <= numero; j++){
            if(numeros[i] == veri[j]){
                veri[j] = -1;
                cont++;
                break;
            }
        }
    }
    
    if(cont < veri.size()){
        cont = analise2(numero,bola);
    }
    return cont;
}

int main(){
        int n,bolas;
    while(true){
        cin >> n >> bolas;
        if(n == 0 && bolas == 0)break;
        numeros.clear();
        for(int i = 0; i < bolas; i++){
            int nu;
            cin >> nu;
            numeros.push_back(nu);
        }
        veri.clear();
        for(int i = 0; i <= n; i++){
            veri.push_back(i);
        }

        cont = analise(n,bolas);

        if(cont == veri.size()){
            cout << 'Y' << endl;
        }
        else{
            cout << 'N' << endl;
        }
        cont = 0;
    }

    return 0;
    //Bingo ---> NepsAcademy(nunca mais quero jogar bingo (: )
}