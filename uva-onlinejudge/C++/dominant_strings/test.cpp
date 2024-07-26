#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
bool comp(string s1, string s2){
    if(s1.size() >= s2.size()){
        return false;
    }
    return true;
}
*/

bool validate(string s1, string s2){
    int i = 0, j = 0;
    //bool val = true;
    while(i != s1.size() || j != s2.size()){
        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else if(s1[i] != s2[j] && s1[i] < s2[j]){
            i++;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    vector<string>aux;
    vector<string>words;
    vector<string>result;

    while(cin >> s){
        aux.push_back(s);
        sort(s.begin(),s.end());
        words.push_back(s);
    }
    
    sort(words.begin(),words.end());

    sort(aux.begin(),aux.end());
    
    for(int i = 0; i < words.size(); i++){
        cout << aux[i] << endl;
    }
    /*


    for(int i = 0; i < words.size()-1; i++){
        if(words[i] != ""){
            for(int j = i+1; j < words.size(); j++){
                if(words[j] != ""){
                    if(validate(words[i],words[j])){
                        words[j].erase();
                    }
                }
            }
        }
    }

    for(int i = 0; i < words.size(); i++){
        if(words[i] != ""){
            result.push_back(aux[i]);
            //cout << aux[i] << endl;
        }
    }
    
    sort(result.begin(),result.end());

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    */

    return 0;
}