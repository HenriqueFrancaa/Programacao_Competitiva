#include <bits/stdc++.h>
using namespace std;


string sum_digits(string s){
    if(s.size() == 1)return s;
    else{
        int cont = 0;
        for(int i = 0; i < s.size(); i++){
            cont += (s[i]-'0');      
        }
        s = to_string(cont);
        return sum_digits(s);
    }
}


int main(){
    string n;
    while(cin >> n){
        if(n == "0")break;
        cout << sum_digits(n) << endl;
        n.clear();
    }
    return 0;
    
    //UVA 11332 - SUMMING DIGITS
    //Com recursão

}
