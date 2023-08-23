#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string C;
    int queries,cont=0,li,ri;
    cin >> C;
    cin >> queries;
    vector<int>ansewer;

    ansewer.push_back(0); // para completar o espaço do vetor pq ele pede a 6 posição mas pega a 5

    for(int i = 0; i < C.size()-1; i++){
        if(C[i] == C[i+1]){
            cont++;
        }
        ansewer.push_back(cont);
    }

    for(int j = 0; j < queries; j++){
        cin >> li >> ri;
        cout << ansewer[ri-1] - ansewer[li-1] << endl;
    }
    return 0;

}