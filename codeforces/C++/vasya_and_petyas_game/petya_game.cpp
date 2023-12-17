#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)return false;
    }
    return true;
}

int main(){
    int n,cont = 0;
    cin >> n;
    vector<int>array;
    for(int i = 2; i <= n; i++){
        if(prime(i) == true){
            int p = 0, j;
            j = 1;
            while(p < n){
                p = pow(i,j);
                if(p <= n){
                    array.push_back(p);
                    cont++;
                }
                else{
                    break;
                }
                j++;
            }
        }
    }
    cout << cont << endl;

    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }cout << endl;

    //CodeForces -A. Vasya and Petya's Game
    //https://codeforces.com/contest/576/problem/A

    return 0;
}