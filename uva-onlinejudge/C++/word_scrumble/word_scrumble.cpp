#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string word;
    while(getline(cin, word)){
        int e = 0, d = 0;
        for(int i = 0; i < word.size(); i++){
            d = i;
            if(word[i] == ' ' && e == 0){
                int p = e;
                for(int j = d-1; j >= d/2 ; j--){
                    char c = word[j];
                    word[j] = word[p];
                    word[p] = c;
                    p++;
                }
                e = i;
            }
            else if(word[i] == ' '){
                int p = e + 1;
                for(int j = d-1; j > (e+d)/2; j--){
                    char c = word[j];
                    word[j] = word[p];
                    word[p] = c;
                    p++; 
                }
                e = i;
            }
            else if(i == word.size()-1 && e == 0){
                int p = e;
                for(int j = d; j > d/2; j--){
                    char c = word[j];
                    word[j] = word[p];
                    word[p] = c;
                    p++;
                }
                e = i;
            }
            else if(i == word.size()-1){
                int p = e + 1;
                for(int j = d; j > (e+d)/2; j--){
                    char c = word[j];
                    word[j] = word[p];
                    word[p] = c;
                    p++;
                }
                e = i;
            }
            
        }
        cout << word << endl;
        
    }
    // 483 Uva Online Judge --> Word Scrumble
    
    return 0;
}