#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    while(n--){
        bool validate = true;
        string str,copy; cin >> str;
        copy = str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                int l = str[i] - 'A';
                str[i] = 'a' + l;  
            }
        }
        for(int i = 0; i < str.size()-1; i++){
            if(str[i] >= str[i+1]){
                validate = false;
                break;
            }
        }

        if(validate){
            cout << copy << ": O" << endl;
        }
        else cout << copy << ": N" << endl;
    }
    return 0;
}