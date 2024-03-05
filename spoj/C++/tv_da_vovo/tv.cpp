#include <iostream>
using namespace std;

int main(){
    int cont = 1;
    while(true){
        int n,m,x,y,xt,yt; // x = left or right  y = up or down
        cin >> n >> m;
        if(n == 0 && m == 0)break;
        int matriz[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matriz[i][j];
            }
        }
        xt = 0, yt = 0;
        while (true)
        {
            cin >> x >> y;
            if(x == 0 && y == 0)break;
            xt += x;
            yt += y; 
        }
        int tv[n][m];
        int l,c;
        for(int i = 0; i < n; i++){
            l = (n+(i-yt)%n)%n;
            for(int j = 0; j < m; j++){
                c = (m+(j+xt)%m)%m;
                tv[l][c] = matriz[i][j];
            }
        }
        cout << "Teste " << cont << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << tv[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cont++;

        //SPOJ - TV - TV da Vovó
        //https://br.spoj.com/problems/TV/


    }
    return 0;
}