#include <iostream>
#include <vector>
#include <algorithm>
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

    for(int i = 0; i < g; i++){
        string name;
        cin >> name;
        bool validate = true; double cont = 0;
        for(int j = 0; j < name.size(); j++){ //encontrar as palavras
            
            if(name[j] == '+')validate = true;
            if(validate == true && name[j] != 32){
                for(int h = 0; h < stack.size(); h++){ // somar o valor da palavra;
                    if(stack[h].first[0] == name[j]){
                        cont += stack[h].second;
                        validate = false;
                        break;
                    }
                }
            }
            else if(name[j] == '<'){
                if(name[j+1] == '='){
            
                }
            }
            
        }
    }
    return 0;
}