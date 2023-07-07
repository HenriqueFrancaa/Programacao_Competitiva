#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string palavra;
    vector<char>resposta;
    int cont = 0;
    while(getline(cin, palavra)){
        for(int i = 0; i < palavra.size(); i++){
            if(palavra[i] == 34 && cont == 0){
                resposta.push_back(96);
                resposta.push_back(96);
                cont = 1;
            }
            else if(palavra[i] == 34 && cont == 1){
                resposta.push_back(39);
                resposta.push_back(39);
                cont = 0;
            }
            else{
                resposta.push_back(palavra[i]);
            }
        }
        for(int j = 0; j < resposta.size(); j++){
            if(j == resposta.size()-1) cout << resposta[j] << endl;
            else cout << resposta[j];
        }
        resposta.clear();
    }

    return 0;
}