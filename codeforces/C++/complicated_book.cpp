#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int p,m,n,h,l,r,x;
    cin >> p >> m;
    vector<int>pages;
    for(int i = 0; i < p; i++){
        cin >> n;
        pages.push_back(n);
    }
    h = 0;
    int conte = 0;
    int contd = 0;
    while(h < m){
        cin >> l >> r >> x;
        for(int i = l-1; i < x-1; i++){
            if(pages[i] > pages[x-1]){
                conte++;
            }
        }
        for(int j = x-1; j < r-1; j++){
            if(pages[j] > pages[r-1]){
                contd++;
            }
        }
        if(contd == conte){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        conte = 0;
        contd = 0;
        h++;
    }
    return 0;
}
