#include <iostream>
#include <string>
#include <cmath>
#include <string.h>
#include <vector>
using namespace std;

int main(){
    int t;
    char id;
    string n = "";
    cin >> t;
    vector<string>num;
    vector<int>index;
    
    while(t--){
        //cin.ignore();
        while(cin >> id && id != '\n'){
            if(id != ' '){
                n.push_back(id);
            }
            else if(id == ' '){
                int idx = 0;
                int j = n.size()-1;
                for(int i = 0; i < n.size(); i++){
                    idx += (n[i] * pow(10,j));
                    j--;
                }
                n = "";
            }
        }
        while(cin >> n){
            if(n != " "){
                num.push_back(n);
            }
            n.clear();
        }
        for(int j = 0; j < index.size(); j++){
        
        }
    }
    return 0;
}