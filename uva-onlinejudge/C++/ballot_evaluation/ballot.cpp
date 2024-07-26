#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <utility>
#include <string>
using namespace std;

int main(){
    int p, g;
    cin >> p >> g;
    vector< pair<string,double>>stack;
    for(int i = 0; i < p; i++){
        string name;
        double points;
        cin >> name >> points;
        stack.push_back(make_pair(name,points));
    }

    for(int i = 1; i <= g; i++){
        char name[10000];
        scanf("\n");
        //fgets(name,1000,stdin);
        fgets(name,1000,stdin);
        double size = strlen(name)-1;
        int house = 0; double n = 0;
        for(int j = size-1; j >= 0; j--){
            if(name[j] >= 48 && name[j] <= 57){
                int c = (name[j] - '0') * pow(10,house);
                n += c;
                house++;
            }
            else{
                break;
            }
        }
        bool validate = true; double cont = 0;
        for(int j = 0; j < size; j++){ //encontrar as palavras
            if(name[j] == '+')validate = true;
            else if(validate == true && name[j] != 32){
                for(int h = 0; h < stack.size(); h++){ // somar o valor da palavra;
                    if(stack[h].first[0] == name[j]){
                        bool veri = true;
                        string word = stack[h].first;
                        for(int z = 1; z < word.size(); z++){
                            if(word[z] != name[j+z]){
                                veri = false;
                                break;
                            }
                        }
                        if(veri == true){

                            cont += stack[h].second;
                            validate = false;
                            break;

                        }

                    }
                }
            }
            else if(name[j] == '<'){
                if(name[j+1] == '='){
                    if(cont <= n)cout << "Guess #" << i << " was correct." << endl;
                    else{
                        cout << "Guess #" << i << " was incorrect." << endl;
                    } 
                }
                else{
                    if(cont < n)cout << "Guess #" << i << " was correct." << endl;
                    else{
                        cout << "Guess #" << i << " was incorrect." << endl;
                    }
                }
                break;
            }
            else if(name[j] == '>'){
                if(name[j+1] == '='){
                    if(cont >= n)cout << "Guess #" << i << " was correct." << endl;
                    else{
                        cout << "Guess #" << i << " was incorrect." << endl;
                    } 
                }
                else{
                    if(cont > n)cout << "Guess #" << i << " was correct." << endl;
                    else{
                        cout << "Guess #" << i << " was incorrect." << endl;
                    }
                }
                break;
            }
            else if(name[j] == '='){
                if(cont == n)cout << "Guess #" << i << " was correct." << endl;
                else{
                    cout << "Guess #" << i << " was incorrect." << endl;
                }
                break;
            }
            
        }
    }
    return 0;
}