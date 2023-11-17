#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

typedef struct strs{
        string part;
} phr;

vector<string>ehQuirk(int tam){
    phr each[2];
    vector<string>ans;
    int high = pow(10, tam/2);
    for(int c = 0; c <= high; c++){
            int current = c*c;
            //pega o numero atual, joga no array de numeros ja testados
            string pastNums = to_string(current);
            //0 a esquerda
            while(pastNums.size() < tam) pastNums = "0"+ pastNums;
            each[0].part = pastNums.substr(0, tam / 2);
            each[1].part = pastNums.substr(tam / 2);
            int sum = stoi(each[0].part)+stoi(each[1].part);
            if(sum*sum == current) ans.push_back(pastNums);
    }
    return ans;
}

int main(){
    int tam;

    while(cin >> tam){
        vector<string>ans = ehQuirk(tam);
        for(const string& current : ans){
            cout << current << endl;
        }
    }

    return 0;
}

/* 256 - Quirksome Squares
https://onlinejudge.org/external/2/256.pdf */