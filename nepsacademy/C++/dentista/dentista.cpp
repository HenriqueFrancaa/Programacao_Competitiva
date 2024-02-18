#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int n,x,y,cont;
    cin >> n;
    vector<pair<int,int>>horario;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        horario.push_back(make_pair(y,x));
    }
    sort(horario.begin(),horario.end());
    int last = horario[0].first;
    cont = 1;
    for(int i = 1; i < n; i++){
        if(horario[i].second >= last){
            cont++;
            last = horario[i].first;
        }
    }
    cout << cont << endl;
    //NepsAcademy -> Dentista
    //https://neps.academy/br/exercise/248
    return 0;
}