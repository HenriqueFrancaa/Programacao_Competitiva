#include <iostream>
#include <vector>
#include <stack>
#include <deque>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        int x,topo;
        vector<int>rua;
        vector<int>resul;
        stack<int>pilha;
        for(int i = 0; i < n; i++){
            cin >> x;
            rua.push_back(x);
        }
        int cont = 1;
        for(int i = 0; i < n; i++){
            bool veri = true;
            while(!pilha.empty() && veri == true){
                topo = pilha.top();
                if(topo == cont){
                    resul.push_back(topo);
                    pilha.pop();
                    cont++;
                }
                else veri = false;
            }       
            if(rua[i] == cont){
                cont++;
                resul.push_back(rua[i]);
            }
            else{
                pilha.push(rua[i]);
            }
        }
        resul.push_back(rua.back());

        while(!pilha.empty()){
            topo = pilha.top();
            if(topo == resul[resul.size()-1]+1){
                pilha.pop();
                resul.push_back(topo);
            }
            else break;
        }

        if( pilha.empty()) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    //SPOJ -> STPAR - STREET PARADE
    //https://www.spoj.com/problems/STPAR/
    return 0;
}