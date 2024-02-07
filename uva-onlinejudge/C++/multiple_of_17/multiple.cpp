#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    //char number[128];
    string number;
    while(cin >> number){
        if(number[0] == '0')break;
        int res = 0;
        for(int i = 0; i < number.size(); i++){
            res = ((res*10)+(number[i] - '0'))%17;
        }
        if(res == 0)cout << "1" << endl;
        else cout << "0" << endl;
    }
    //Uva online Judge - Multiple of 17
    return 0;
}