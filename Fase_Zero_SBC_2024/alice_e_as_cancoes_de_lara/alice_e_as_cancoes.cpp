#include <iostream>
using namespace std;

int main(){
    int songs[3];
    bool days[3];
    cin >> songs[0];
    cin >> songs[1];
    cin >> songs[2];
    for(int i = 0; i < 3; i++){
        if(songs[i] != 0){
            days[songs[i]-1] = true;
        }
    }
    for(int i = 0; i < 3; i++){
        if(days[i] == false){
            cout << i+1 << endl;
        }
    }

    return 0;
}
