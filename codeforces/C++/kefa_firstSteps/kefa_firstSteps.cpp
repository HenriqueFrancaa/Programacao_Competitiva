#include <iostream>
#include <vector>
using namespace std;

int main(){

    int dias,dinheiro,p;
    int max_sub = 1;
    int sub = 1;
    cin >> dias;
    vector<int>lucro;

    for(int i = 0; i < dias; i++){
        cin >> dinheiro;
        lucro.push_back(dinheiro);
    }

    for(int i = 0; i < dias - 1; i++){
        if(lucro[i] <= lucro[i+1]){
            sub++;
            if(sub > max_sub){
                max_sub = sub;
            }
        }
        else{
            sub = 1;
        }
            
    }

    cout << max_sub << endl;


    return 0;
}