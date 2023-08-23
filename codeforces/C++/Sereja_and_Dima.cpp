#include <iostream>
#include <vector>
using namespace std;

int main(){
    int c,n,i;
    int veri = 0;
    vector<int>num;
    cin >> c;
    vector<int>::iterator it;
    vector<int>::iterator it2;

    int S=0,D=0;

    for(int i = 0; i < c; i++){
        cin >> n;
        num.push_back(n);
    }

    for(int i = 0; i < c; i++){
        it = num.begin();
        it2 = num.end()-1;
        if(veri == 0){
            if(*it > *it2){
                S += *it;
                num.erase(num.begin());
            }
            else{
                S += *it2;
                num.pop_back();
            }
            veri++;
        }
        else{
            if(*it > *it2){
                D += *it;
                num.erase(num.begin());
            }
            else{
                D += *it2;
                num.pop_back();
            }
            veri--; 
        }    
    }

    cout << S << " " << D << endl;


    return 0;
}