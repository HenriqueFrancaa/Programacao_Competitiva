#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int j;
    j = 1;
    while(true){
        int n,x,y,u,v,x1,y1,u1,v1;
        cin >> n;
        if(n == 0)break;
        cin >> x >> y >> u >> v;
        for(int i = 0; i < n-1; i++){
            cin >> x1 >> y1 >> u1 >> v1;
            x = max(x,x1);
            y = min(y,y1);
            u = min(u,u1);
            v = max(v,v1);
        }
        cout << "Teste " << j << endl;

        if(x < u && y > v){
            cout << x << " " << y << " " << u << " " << v << endl;
        }
        else{
            cout << "nenhum" << endl;     
        }
        cout << endl;
        j++;
    }
    
    //SPOJ - MACACO - Macaco-prego
    //https://br.spoj.com/problems/MACACO/ 

    return 0;
}
