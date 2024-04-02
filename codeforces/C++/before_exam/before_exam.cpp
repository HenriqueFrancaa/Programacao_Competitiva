#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ll d, sumtotal,mn,mx = 0;
    ll mnt = 0, mxt = 0;
    cin >> d >> sumtotal;
    vector<ll>dias;
    vector<ll>maximos;
    for(int i = 0; i < d; i++){
        cin >> mn >> mx;
        mnt += mn;
        mxt += mx;
        dias.push_back(mn);
        maximos.push_back(mx);
    }

    if(mnt > sumtotal || mxt < sumtotal){
        cout << "NO" << endl;
    }

    else{
        sumtotal -= mnt;
        int i = 0;
        while(sumtotal >  0){
            while(dias[i] < maximos[i]){
                dias[i]++;
                sumtotal--;
                if(sumtotal == 0)break;
            }
            i++;
        }

        cout << "YES" << endl;
        for(int i = 0; i < dias.size(); i++){
            cout << dias[i] << " ";
        }cout << endl;
    
    }
    

    //CodeForces -> B. Before an Exam
    //https://codeforces.com/problemset/problem/4/B
    return 0;
}
