#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int>houses;

int search(int x){
    int low = 0,mid = 0;
    int high = houses.size()-1;
    while(low <= high){
        mid = (low+high)/2;
        if(houses[mid] == x){
            return mid;
        }
        else if(houses[mid] > x){
            high = mid -1;
        }
        else if(houses[mid] < x){
            low = mid +1;
        }
    }
    return -1;
}

int main(){
    int n,m,x;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        houses.push_back(x);
    }
    int index = 0, time = 0;
    for(int i = 0; i < m; i++){
        cin >> x;
        int ix = search(x);
        time += abs(index - ix);
        index = ix;
    }
    cout << time << endl;
    //SPOJ - CARTEI14-Carteio
    //https://br.spoj.com/problems/CARTEI14/
    return 0;
}