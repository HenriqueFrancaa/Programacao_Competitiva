#include <bits/stdc++.h>
using namespace std;

int main(){
    string j;
    set<string>joias;
    while(cin >> j){
        joias.insert(j);
        j.clear();
    }
    cout << joias.size() << endl;

    return 0;
}
