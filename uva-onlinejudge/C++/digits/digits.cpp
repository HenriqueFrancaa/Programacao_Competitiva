#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        if(str == "END"){ break; }
        int size = str.size();
        int cont = 1;
        if(size == 1 && str[0] == '1'){ cout << size << endl; }
        else{
            while(size != 1){
                string s = to_string(size);
                size = s.size(); 
                cont++;
            }
            cout << cont+1 << endl;
        }
    }

    return 0;
}

/* 11687 Digits
https://onlinejudge.org/external/116/11687.pdf */