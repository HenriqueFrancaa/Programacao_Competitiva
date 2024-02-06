#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string exp;
        cin >> exp;
        stack<char>pilha; bool validate = true; // criando a pilha
        for(int i = 0; i < exp.size(); i++){
            char c = exp[i];
            if(c == '{' || c == '[' || c == '('){
                pilha.push(c);
            }
            else{
                if(pilha.empty()){//para saber se a pilha está vazia
                    validate = false;
                    break;
                }
                char topo = pilha.top();
                pilha.pop();//retirando o item do topo da pilha
                if((c == '}' && topo != '{') || (c == ']' && topo != '[') || (c == ')' && topo != '(')){
                    validate = false;
                    break;
                }
            }
        }
        if(!pilha.empty()){ // para saber se a pilha não está vazia
            cout << 'N' << endl;
        }
        else if(validate)cout << 'S' << endl;
        else cout << 'N' << endl;
    }
    //NepsAcademy - Expressões
    //https://neps.academy/br/exercise/271
    return 0;
}