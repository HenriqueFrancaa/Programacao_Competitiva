#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


void ord(int *X, int *x, int *Y, int *y){
    if(*x < *y){
        int t = *X;
        int t2 = *x;
        *X = *Y;
        *x = *y;
        *Y = t;
        *y = t2;
    }
}
int main(){
    int n,m,o,p,b;
    cin >> n >> m;
    vector<pair<int,int>>podio;

    for(int i = 1; i <= n; i++){
        podio.push_back(make_pair(i,0));
    }
    for(int j = 0; j < m; j++){
        cin >> o >> p >> b;
        podio[o-1].second += 1000;
        podio[p-1].second += 10;
        podio[b-1].second += 1;
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            ord(&podio[j].first, &podio[j].second, &podio[j+1].first, &podio[j+1].second);

        }
    }

    for(int i = 0; i < n-1; i++){
        cout << podio[i].first << " ";
    }
    cout << podio[n-1].first << endl;

    return 0;
}