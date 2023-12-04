#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
    int t,x,n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x;
        vector<int>num;
        for(int j = 0; j < x; j++){
            cin >> n;
            num.push_back(n);
        }
        sort(num.begin(),num.end());
        int maior = -1000000000;
        for(int j = 0; j < num.size()-1; j++){
            int d = max(num[0],(num[j+1] - num[j]));
            if( d > maior){
                maior = d;
            }
        }

        if(num.size() == 1){
            maior = num[0];
        }

        cout << maior << endl;
    }
    return 0;
}