#include <iostream>
#include <string.h>
#include <vector>
#include <string>
using namespace std;

int main(){
    char  z= 'p';
    char q = 'a';
    string h = "h";
    h += z;
    cout << h << endl;
    h+=q;
    cout << h << endl;

    string s1 = "henrique";
    string s2 = "henrique";
    if(s1.compare(s2) == 0){
        cout << "igual" << endl;
    }
    else{
        cout << "nao eh igual" << endl;
    }

    int t = 5/2;
    cout << t << endl;
    return 0;
}