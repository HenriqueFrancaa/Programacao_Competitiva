#include <iostream>
#include <vector>
using namespace std;

int main(){
    int alunos;
    int t = 1;
    while(cin >> alunos){
        if(alunos == 0)break;
        vector<int>media;
        vector<int>melhor;
        vector<int>codigo;
        int maior = -1;
        int c,m;
        for(int i = 0; i < alunos; i++){
            cin >> c >> m;
            codigo.push_back(c);
            media.push_back(m);
        }

        for(int i = 0; i < alunos; i++){
            if(media[i] > maior){
                maior = media[i];
                melhor.clear();
                melhor.push_back(codigo[i]);
            }
            else if(media[i] == maior){
                melhor.push_back(codigo[i]);
            }
        }
        cout << "Turma " << t << endl;

        for(int i = 0; i < melhor.size(); i++){
            if(i != melhor.size()-1){
                cout << melhor[i] << " ";
            }
            else{
                cout << melhor[i] << endl;
            }
        }
        t++;

    }
    return 0;
}