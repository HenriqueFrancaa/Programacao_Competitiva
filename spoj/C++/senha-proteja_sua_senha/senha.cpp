#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    int test = 1;
    while(cin >> n && n != 0){
        int m[n][10];
        char l[n][6];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 10; j++){
                cin >> m[i][j];
            }
            for(int j = 0; j < 6; j++){
                cin >> l[i][j];
            }
        }
        map<int,int>senha;
        int st,end;
        cout << "Teste " << test << endl;
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < n; j++){
                if(l[j][i] == 'A'){
                    st = 0;
                    end = 1;
                }
                else if(l[j][i] == 'B'){
                    st = 2;
                    end = 3;
                }
                else if(l[j][i] == 'C'){
                    st = 4;
                    end = 5;   
                }
                else if(l[j][i] == 'D'){
                    st = 6;
                    end = 7;
                }
                else if(l[j][i] == 'E'){
                    st = 8;
                    end = 9;
                }
                while(st <= end){
                    if(senha.count(m[j][st]) == 0){
                        senha[m[j][st]] = 1;
                    }
                    else{
                        senha[m[j][st]]++;
                    }
                    st++;
                }
                if(j == n-1){
                    int mx = -1;
                    int s = 0;
                    map<int,int>::iterator it;
                    for(it = senha.begin(); it != senha.end(); it++){
                        if(it->second > mx){
                            mx = it->second;
                            s = it->first;
                        }
                    }
                    cout << s << " ";
                }
            }
            senha.clear();
        }
        cout << endl;
        cout << endl;
        test++;
    }
    return 0;
    // SPOJ -> SENHA - Proteja sua senha
    //https://br.spoj.com/problems/SENHA/
}