#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int l,d,di,li;
    cin >> l >> d;
    vector<pair<int,int>>batalhas;

    for(int i= 0; i < d; i++){
        cin >> di >> li;
        batalhas.push_back(make_pair(di,li));
    }

    int cont;

    sort(batalhas.begin(),batalhas.end());

    for(int i = 0; i < d; i++){
        if(batalhas[i].first < l){
            l+=batalhas[i].second;
            cont++;
        }
        else break;
    }

    if(cont == d){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


    return 0;
}