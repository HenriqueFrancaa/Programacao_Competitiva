#include <iostream>
#include <vector>
#include <map>
#include <utility>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector<int>c;

    map<int,int>candidatos;

    for(int i = 0; i < n; i++){
        cin >> x;
        c.push_back(x);
        candidatos[x]++;
    }
    int mx = 0;
    int eleito;
    for(int i = 0; i < n; i++){
        int k = c[i];
        if(candidatos[k] > mx){
            mx = candidatos[k];
            eleito = k;
        }
    }


    cout << eleito << endl;
    return 0;
}