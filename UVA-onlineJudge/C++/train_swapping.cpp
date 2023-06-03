#include <iostream>
#include <vector>
using namespace std;

int main(){
    int test,tamanho, vagao,temp;
    cin >> test;
    
    for(int i = 0; i < test; i++){
        int cont = 0;
        cin >> tamanho;
        vector<int>ordem;
        for(int j = 0; j < tamanho; j++){
            cin >> vagao;
            ordem.push_back(vagao);
        }
        

        for(int i = 0; i <= tamanho; i++){
            for(int j = 0; j < (tamanho - 1); j++){
                if(ordem[j] > ordem[j+1]){
                    temp = ordem[j];
                    ordem[j] = ordem[j+1];
                    ordem[j+1] = temp;
                    cont++;
                }
            }

        }

        cout <<"Optimal train swapping takes " << cont << " swaps." << endl;


    }
    return 0;
}