#include <bits/stdc++.h>
using namespace std;

int main(){
    string mae, pai;
    int t = 1;
    while(getline(cin, mae)){
        if(mae == "#"){ break; }
        getline(cin, pai);
        int i = 0, j = 0, cont = 0, best = 0;
        for(int h = 0; h < mae.size(); h++){
            i = h; j = 0;
            while(i < mae.size() || j < pai.size()){
                if(mae[i] == pai[j]){
                    i++; j++; cont++;
                }else{
                    if(j >= pai.size()-1){
                        if(i >= mae.size()){j++;}
                        i++;
                    }else{
                        j++;
                    }
                }
            }
            if(cont > best){ best = cont; }
            cont = 0;
        }
        for(int h = 0; h < pai.size(); h++){
            i = h; j = 0;
            while(i < pai.size() || j < mae.size()){
                if(mae[j] == pai[i]){
                    i++; j++; cont++;
                }else{
                    if(j >= mae.size()-1){
                        if(i >= pai.size()){j++;}
                        i++;
                    }else{
                        j++;
                    }
                }
            }
            if(cont > best){ best = cont; }
            cont = 0;
        }
        printf("Case #%d: you can visit at most %d cities.\n", t,best);
        t++;
    }

    return 0;
}