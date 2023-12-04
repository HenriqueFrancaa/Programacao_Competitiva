#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector<int>guiltys;
    for(int i = 0; i < n; i++){
        cin >> x;
        guiltys.push_back(x);        
    }
    int kill = n, live = 0;

    for(int i = n-1; i >=0; i--){
        if(i < kill){
            live++;
        }
        kill = min(kill, i - guiltys[i]);
    }

    cout << live << endl;
    return 0;
}