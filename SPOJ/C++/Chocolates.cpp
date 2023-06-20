#include <iostream>
using namespace std;

int main(){
    int n,m;

    cin >> n >> m;

    if(n == 1 && m == 1){
        cout << "Paula" << endl;
    }

    else{
        if(n%(m+1) == 0){
            cout << "Carlos" << endl;
        }
        else{
            cout << "Paula" << endl;
        }
    }

    return 0;
}