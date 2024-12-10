#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    while(getline(cin,a)){
        string x = "";
        vector<int>va(26,0);
        vector<int>vb(26, 0);

        for(int i = 0; i < a.size(); i++){
            va[a[i]- 97]++;
        }

        getline(cin,b);

        for(int j = 0; j < b.size(); j++){
            vb[b[j]-97]++;
        }

        for(int i = 0; i < va.size(); i++){
            if(va[i] != 0 && vb[i] != 0){
                int n = (va[i] + vb[i])/2;
                for(int j = 0; j < n; j++){
                    x.push_back(i+97);
                }
            }
        }

        sort(x.begin(), x.end());
        if(x.empty())cout << endl;
        else cout << x << endl;
        a.clear();
        b.clear();
    }
    return 0;
}
