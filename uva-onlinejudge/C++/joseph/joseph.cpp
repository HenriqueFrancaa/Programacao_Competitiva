#include <iostream>
using namespace std;


int main(){
    int k;
    int resp[13] = {2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    while(cin >> k && k != 0){
        cout << resp[k-1] << endl;
    }
    return 0;
}