#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int>num;
    for(int i = 0; i <= 5; i++){
        num.push_back(i);
    }

    int cont = upper_bound(num.begin(),num.end(),3) - num.begin();

    cout << cont << endl;

    return 0;
}
