#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>stall;
int r = 0;
bool larges_minimum_distance(int dist, int c  ){
    int cont = 1;
    int co = stall[0];
    
    for(int i = 1; i < stall.size();i++){
        if((stall[i] - co) >= dist){
            cont++;
            co = stall[i];
        }
        if(cont == c){
            return true;
        }
        
    }


    return false;
}


int binary_search(int c, int s){
    int low = 1;
    int high = stall[s-1] - stall[0];
    int mid = 0;
    while(low <= high){
        mid = (low + high)/2;
        if(larges_minimum_distance(mid,c) == true){
            r = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return 0;
}



int main(){
    int t,s,cows,p;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> s >> cows;
        for(int j = 0; j < s; j++){
            cin >> p;
            stall.push_back(p);
        }

        sort(stall.begin(),stall.end());
        binary_search(cows,s);

        printf("%d\n", r);
        stall.clear();
    }
    return 0;
    //Aggresive cow´s... i hate cows !!
    //https://www.spoj.com/problems/AGGRCOW/
}