#include <bits/stdc++.h>
using namespace std;



string update(string s1, int sz){
    string s2(sz,'0');
    s2.append(s1);
    return s2;
}


int main(){
    int validate,carry;
    string n1,n2;
    while(cin >> n1 >> n2){
        if(n1 == "0" && n2 == "0")break;
        validate = 0;
        carry = 0;
        if(n1.size() > n2.size()){
            int dif_size = n1.size() - n2.size();
            n2 = update(n2,dif_size);
        }

        if (n1.size() < n2.size()){
            int dif_size = n2.size() - n1.size();
            n1 = update(n1, dif_size);
        }


        for(int i = n1.size()-1; i >= 0; i--){
            int aux = ((n1[i] + n2[i])-'0') - '0';
            if(carry > 0){
                aux += carry;
            }
            if(aux >= 10){
                carry = aux/10;
                validate++;
            }
            else{
                carry = 0;
            }
        }
        if(validate != 0){
            if(validate == 1){
                cout << validate << " carry operation." << endl;
            }
            else{
                cout << validate << " carry operations." << endl;
            }
        }
        else cout << "No carry operation." << endl;
        /*
        */
    }
    return 0;

    // UVA Online Judge 10035 Primary Arithmetic
}