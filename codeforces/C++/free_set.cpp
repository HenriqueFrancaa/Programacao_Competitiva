#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    long long n, k,x;
    cin >> n >> k;
    set<long long>num;
    for(int i = 0; i < n; i++){
        cin >> x;
        num.insert(x);
    }
 
    set<long long>fset;
    set<long long>::iterator it;
    for(it = num.begin(); it != num.end();it++){
        if(*it%k == 0){
            if(fset.count(*it * k) == 0 && fset.count(*it/k) == 0){
                fset.insert(*it);
            }
        }
        else{
            if(fset.count(*it * k) == 0){
                fset.insert(*it);
            }
        }
    }
 
    cout << fset.size() << endl;
 
    
    return 0;
    //C. k-Multiple Free Set --> CodeForces
}