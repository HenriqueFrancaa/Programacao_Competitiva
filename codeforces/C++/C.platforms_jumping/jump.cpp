#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,d,c; cin >> n >> m >> d;
    vector<int>lago (n+2,0);
    int pos = 0;
    int cont = 1;   
    
    if(d >= n){
        int plat[m];int mx = 0;
        for(int i = 0; i < m; i++){
            cin >> plat[i];
            mx += plat[i];
        }
        pos = n+1-mx;
        int i = 0;
        while(i < m){
            while(plat[i] > 0){
                lago[pos] = cont;
                plat[i]--;
                if(plat[i] == 0)break;
                pos++;
            }
            i++;
        }

    }
    else{
        for(int h = 0; h < m; h++){
            cin >> c;
            pos += d;
            if(pos >= n+1)break;
            while(c > 0){
                lago[pos] = cont;
                c--;
                if(c == 0)break;
                pos++;
            }
            cont++;
        }
    }

    if(pos+d >= n+1){
        cout << "YES" << endl;
        for(auto j = 1; j < lago.size()-1; j++)cout << lago[j] << " ";
        cout << endl;
    }
    else cout << "NO" << endl;

    


    return 0;
}