#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    //first = hora q termina, second = hora q começa
    while(t--){
        int n,s,e;
        int cont = 1;
        vector<pair<int,int>>activites;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> s >> e;
            activites.push_back(make_pair(e,s));
        }
        sort(activites.begin(), activites.end());
        int j = 0;
        for(int i = 1; i < n; i++){
            if(activites[j].first <=  activites[i].second){
                cont++;
                j = i;
            }
        }
        cout << cont << endl;
    }
    return 0;
}
