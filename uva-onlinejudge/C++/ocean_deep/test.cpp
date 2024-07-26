#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    char n;
    long long ex = 0, t = 0;
    vector<char>num;
    while(cin >> n){    
        if(n == '#'){
            int sz = 0;
            for(int i = num.size()-1; i >= 0; i--){
                if(num[i] == '1'){
                    t+= pow(2,sz);
                }
                sz++;
            }
            cout << t << endl;
            if(t%131071 == 0)cout << "YES" << endl;
            else cout << "NO" << endl;
            t = 0;
            num.clear();
        }
        else{
            num.push_back(n);
        }

    }
    return 0;
}