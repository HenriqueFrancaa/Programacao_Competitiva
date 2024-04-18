#include <iostream>
#include <string>
using namespace std;


int main(){
    string word;
    int i = 1;
    while(true){
        cin >> word;
        if(word[0] == '*')break;
        else if(word[0] == 'H'){
            cout << "Case " << i << ": " << "Hajj-e-Akbar" << endl;
        }
        else{
            cout << "Case " << i << ": " << "Hajj-e-Asghar" << endl;
        }
        i++;
        word.clear();
    }
    return 0;
    //12577 Hajj-e-Akbar
}