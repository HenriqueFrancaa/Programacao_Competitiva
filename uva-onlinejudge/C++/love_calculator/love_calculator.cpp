#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
using namespace std;

int l = 0;
int l2 = 0;

double love(string lov){
    while(lov.size() != 1){
        int s = 0;
        for(int i = 0; i < lov.size();i++){
            s += lov[i] - '0';
        }
        lov = to_string(s);
    }

    double r = lov[0] - '0';

    return r;
}

int main(){
    char lov[1000];
    char lov2[1000];
    while (fgets(lov,1000,stdin) && fgets(lov2,1000,stdin)){
        l = 0;
        l2 = 0;
        int s = 0;
        int size = strlen(lov);
        //vendo a soma do primeiro nome
        for(int i = 0; i < size; i++){
            if(lov[i] > 96 && lov[i] < 123){
                s = lov[i] - 96;
                l += s;
            }
            else if(lov[i] > 64 && lov[i] < 91){
                s = lov[i] - 64;
                l += s;
            }
        }
        string lov = to_string(l);
        s = 0;
        //vendo a soma do segundo nome
        size = strlen(lov2);
        for(int i = 0; i < size; i++){
            if(lov2[i] > 96 && lov2[i] < 123){
                s = lov2[i] - 96;
                l2 += s;
            }
            else if(lov2[i] > 64 && lov2[i] < 91){
                s = lov2[i] - 64;
                l2 += s;
            }
            
        }

        string lov2 = to_string(l2);

        double r = love(lov);
        double r2 = love(lov2);

        if(r > r2){
            double t = r;
            r = r2;
            r2 = t;
        }

        double ans = (r/r2) * 100;
        
        cout << fixed << setprecision(2) << ans << " %" << endl;
    }

    //UVA 10424 - Love Calculator <3
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1365
    return 0;
}