#include <iostream>
#include <vector>
#include <string.h>
#include <string>
using namespace std;

string palavra;
string sub = "";
int cont = 0;
bool palind = true;
void veri(int p, int y){
    int s = p + y;
    int t = y;
    sub = "";
    if(s%2 == 0){
        for(int i = p; i < s/2; i++){
            if(palavra[i] != palavra[y]){
                palind = false;
                break;
            }
            y--;
        }
    }
    else{
        for(int i = p; i <= s/2; i++){
            if(palavra[i] != palavra[y]){
                palind = false;
                break;
            }
            y--;
        }
    }
    if(palind == true){
        for(int i = p; i <= t; i++){
            sub += palavra[i];
        }
    }
}
int main(){
    while(cin >> palavra){
        int letras[26];
        memset(letras,0,sizeof(letras));
        vector<string>palindromos;
        //verificando as letras iguais;
        for(int i = 0; i < palavra.size(); i++){
            if(letras[palavra[i] - 97] == 0){
                letras[palavra[i] - 97]++;
                cont++;
                string s ="";
                s += palavra[i];
                palindromos.push_back(s);
            }
        }

        for(int i = 0; i < palavra.size()-1; i++){
            for(int j = i+1; j < palavra.size(); j++){
                if(palavra[i] == palavra[j]){
                    veri(i,j);
                    if(palind == true){
                        for(int h = 0; h < palindromos.size(); h++){
                            if(sub.compare(palindromos[h]) == 0){
                                palind = false;
                                break;
                            }
                            //cout << sub << " " << palindromos[h] << " " << sub.compare(palindromos[h]) << endl;
                        }
                        if(palind == true){
                            cont++;
                            palindromos.push_back(sub);
                        }
                    }
                }
                palind = true;
            }
        }
        //for(int i = 0; i < palindromos.size(); i++){
        //    cout << palindromos[i] << " ";
        //}
        //cout << endl;
        cout <<"The string '" << palavra << "' contains " << cont << " palindromes." << endl;
        cont = 0;
    }
    return 0;
    //TAO PERTOOOOOOOOOOOOOOOOOOOOOOOOO
}