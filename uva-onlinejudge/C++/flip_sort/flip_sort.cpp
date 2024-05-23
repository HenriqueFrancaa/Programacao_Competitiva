#include <iostream>
#include <vector>
using namespace std;


int main(){
    int sz,n,cont = 0, temp;
    while(cin >> sz){
        vector<int>num;
        for(int i = 0; i < sz; i++){
            cin >> n;
            num.push_back(n);
        }
        for(int i = 0; i <= sz; i++){
            for(int j = 0; j < (sz - 1); j++){
                if(num[j] > num[j+1]){
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    cont++;
                }
            }

        }
        cout << "Minimum exchange operations : " << cont << endl;
        cont = 0;
        num.clear();
    }
    //UVa Online Judge 10327
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1268
    return 0;
}