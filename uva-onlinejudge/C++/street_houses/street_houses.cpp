#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> c = {"6", "35", "204", "1189", "6930", "40391", "235416", "1372105", "7997214", "46611179"};
    vector<string> b = {"8", "49", "288", "1681", "9800", "57121", "332928", "1940449", "11309768", "65918161"};
    vector<int>espaco1;
    vector<int>espaco2;
    int tamanho1;
    int tamanho2;

    for(int i = 0; i < c.size(); i++){
        tamanho1 = 8 - c[i].size();
        espaco1.push_back(tamanho1);
    }

    for(int i = 0; i < b.size(); i++){
        tamanho2 = 10 - b[i].size();
        espaco2.push_back(tamanho2);
    }

    for(int j  = 0; j < c.size(); j++){
        cout << "  ";
        for(int c = 0; c < espaco1[j]; c++){
            cout << " ";
        }
        cout << c[j];
        for(int b = 0; b < espaco2[j]; b++){
            cout << " ";
        } 
        cout << b[j] << endl;
    }


    return 0;
}