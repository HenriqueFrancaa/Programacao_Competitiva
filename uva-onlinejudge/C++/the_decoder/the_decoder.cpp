#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    char c;
    while(scanf("%c", &c)!= EOF){
        if(c == '\n'){
            cout << endl;
        }

        else{
            c = c - 7;
            cout << c;
        }
            
    }
    //Uva online judge - The decoder
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=399
    return 0;
}