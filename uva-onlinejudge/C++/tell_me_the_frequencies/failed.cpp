#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

bool sec(pair<int, int>&a, pair<int, int>&b){
    return a.second > b.second;
}

int main(){
    bool start = false;
    string str;
    while(getline(cin, str)){
        if(!start){ cout << endl; start = true; }
        map<int, int>frequency;
        for(int i = 0; i < str.length(); i++){
            if(str[i] >= 32 && str[i] < 128){
                int pos = int(str[i]);
                frequency[pos]++;
            }
        }
        vector<pair<int,int>>sorted;
        for(map<int,int>::iterator it = frequency.begin(); it != frequency.end(); it++){
            sorted.push_back(make_pair(it->second, it->first));
        }
        sort(sorted.begin(), sorted.end());
        for(int i = 0; i < sorted.size(); i++){
            if(i != sorted.size()-1 && sorted[i].first == sorted[i+1].first){
                int j = i+1;
                while(sorted[i].first == sorted[j].first){j++;}
                sort(sorted.begin()+i, sorted.begin()+j, sec);
                while(i < j){
                    cout << sorted[i].second << " " << sorted[i].first << endl;
                    i++;
                }
                i--;
            }else{
                cout << sorted[i].second << " " << sorted[i].first << endl;    
            }
        }
    }

    return 0;
}