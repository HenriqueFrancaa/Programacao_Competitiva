#include <iostream>
#include <string>
using namespace std;

int main(){
    int num[6] = {1,2,3,4,5,6};
    int vz = 0;
    string word;
    while(cin >> word){
        vz = 0;
        for(int i = 0; i < word.size(); i++){
            if((word[i] == 'B' || word[i] == 'F' || word[i] == 'P' || word[i] == 'V') && vz != num[0]){
                cout << num[0];
                vz = num[0];
            }
            else if((word[i] == 'C' || word[i] == 'G' || word[i] == 'J' || word[i] == 'K' || word[i] == 'Q' || word[i] == 'S' || word[i] == 'X' || word[i] == 'Z') && vz != num[1]){
                cout << num[1];
                vz = num[1];
            }
            else if((word[i] == 'D' || word[i] == 'T') && vz != num[2]){
                cout << num[2];
                vz = num[2];
            }
            else if(word[i] == 'L' && vz != num[3]){
                cout << num[3];
                vz = num[3];
            }

            else if((word[i] == 'M' || word[i] == 'N') && vz != num[4]){
                cout << num[4];
                vz = num[4];
            }
            else if(word[i] == 'R' && vz != num[5]){
                cout << num[5];
                vz = num[5];
            }
            else if(word[i] == 'A' || word[i] == 'E' || word[i] == 'O' || word[i] == 'U' || word[i] == 'H' || word[i] == 'W' || word[i] == 'Y' || word[i] == 'I'){
                vz = 0;
            }
            
        }
        cout << endl;
    }

    return 0;
}