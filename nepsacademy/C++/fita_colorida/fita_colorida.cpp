#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tamanho;
    int tom = 0;
    cin >> tamanho;

    vector<int>fita;
    for(int i = 0; i < tamanho; i++){
        int n;
        cin >> n;
        fita.push_back(n);
    }
    while(tom <= 9){
        for(int i = 0; i < tamanho; i++){
            if(fita[i] == tom){
                if(fita[i-1] == -1){
                    fita[i-1] = tom + 1;
                }
                if(fita[i+1] == -1){
                    fita[i+1] = tom + 1;
                }
            }
        }
        tom++;
    }

    for(int i = 0; i < tamanho; i++){
        if(fita[i] == 10 || fita[i] == -1){
            fita[i] = 9;
        }
    }

    for(int i = 0; i < tamanho;i++){
        if(i != tamanho -1){
            cout << fita[i] << " " ;
        }
        else{
            cout << fita[i] << endl;
        }
    }

    return 0;
}