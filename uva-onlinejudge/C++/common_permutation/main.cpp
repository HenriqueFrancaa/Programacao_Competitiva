#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    while(getline(cin,a)){
        sort(a.begin(), a.end());
        getline(cin,b);
        sort(b.begin(),b.end());

        int i = 0, j = 0;

        while(i < a.size() &&  j < b.size()){
            if(a[i] == b[j]){
                cout << a[i];
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}
