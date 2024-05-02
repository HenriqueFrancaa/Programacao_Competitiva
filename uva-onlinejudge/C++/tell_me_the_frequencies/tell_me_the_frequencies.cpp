#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(){
    string str; bool val = true;
    while(getline(cin,str)){
        if(!val)cout << endl;
        int array[128]={0};
        memset(array,0,128);
        for(int i = 0; i < str.size();i++){
            if(str[i] >= 32 && str[i] < 128){
                array[int(str[i])]++;
            }
        }

        vector<pair<int,int>>frequency;
        for(int i = 0; i < 128; i++){
            if(array[i] != 0){
                frequency.push_back(make_pair(array[i],i));
            }
        }
        sort(frequency.begin(), frequency.end());

        /*
        */
        for(int j = 0; j < frequency.size(); j++){

            for(int i = frequency.size()-1; i >= 1; i--){
                if(frequency[i].first == frequency[i-1].first && frequency[i].second > frequency[i-1].second){
                    int v = frequency[i-1].first;
                    int l = frequency[i-1].second;
                    frequency[i-1].first = frequency[i].first;
                    frequency[i-1].second = frequency[i].second;
                    frequency[i].first = v;
                    frequency[i].second = l;

                }
            }
        }

        for(int i = 0; i < frequency.size(); i++){
            cout << frequency[i].second << " " << frequency[i].first << endl;
        }
        str = "";
        frequency.clear();
        val = false;

    }
    return 0;
    // UVA-OnlineJudge -> 10062-TELL ME THE FREQUENCIES
    //https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1003
}