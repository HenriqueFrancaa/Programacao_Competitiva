#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int c, k;
    int x;
    while(cin >> c >> k){
        if(c == 0 && k == 0)break;
        vector<int>drag;
        vector<int>knitghs;
        for(int i = 0; i < c; i++){
            cin >> x;
            drag.push_back(x);
        }
        sort(drag.begin(),drag.end());

        for(int j = 0; j < k; j++){
            cin >> x;
            if(x >= drag[0]){
                knitghs.push_back(x);
            }
        }
        sort(knitghs.begin(), knitghs.end());

        int sum = 0;
        bool cont = true;
        int j = 0;
        for(int i = 0; i < drag.size(); i++){
            while(j < k && knitghs[j] < drag[i])
                j++;
            if(j == k){
                cont = false;
                break;
            }
            sum += knitghs[j++];
            
        }
        
        if(cont){
            cout << sum << endl;
        }
        else{
            cout << "Loowater is doomed!" << endl;
        }
        }
        cout << endl;

    return 0;
}