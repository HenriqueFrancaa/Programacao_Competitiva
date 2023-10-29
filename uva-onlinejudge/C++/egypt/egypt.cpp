#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a == 0 && b == 0 && c == 0) break;
        if(a > b && a > c){
            if(c * c + b * b != a * a) cout << "wrong" << endl;
            else cout << "right" << endl;
        }
        else if(b > a && b > c){
            if(a * a + c * c != b * b) cout << "wrong" << endl;
            else cout << "right" << endl;
        }
        else if(c > a && c > b){
            if(a * a + b * b != c * c) cout << "wrong" << endl;
            else cout << "right" << endl;
        }
        else cout << "wrong" << endl;
    }
    return 0;
}

