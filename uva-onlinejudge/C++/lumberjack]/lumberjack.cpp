#include <iostream>
#include <vector>
using namespace std;


int main(){
    int t;
    cin >> t;
    cout << "Lumberjacks:" << endl;
    for(int i = 0; i < t; i++){
        vector<int>barbas;
        int n;
        for(int j = 0; j < 10; j++){
            cin >> n;
            barbas.push_back(n);
        }

        int d = 1, c = 1;

        for(int j = 0; j < 9; j++){
            if(barbas[j] > barbas[j+1])c++;
            else if(barbas[j] < barbas[j+1])d++;
        }

        if(c == 10 || d == 10){
            cout << "Ordered" << endl;
        }
        else{
            cout << "Unordered" << endl;
        }
    }
    //UVA 11942 - Lumberjacks Sequencing
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3093
    return 0;
}