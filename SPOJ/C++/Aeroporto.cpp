#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,v,x,y;
    int t = 1;
    while(true){
        cin >> a >> v;
        int cont=0;
        int freq = 0;
        if(a == 0 && v == 0)break;
        vector<int>ida;
        vector<int>chegada;
        vector<int>aero;
        for(int i = 0; i < v; i++){
            cin >> x >> y;
            ida.push_back(x);
            chegada.push_back(y);
        }

        for(int i = 1; i <= a; i++){
            for(int j = 0; j < v; j++){
                if(ida[j] == i)cont++;
                if(chegada[j] == i)cont++;
            }
            
            if(cont > freq){
                aero.clear();
                aero.push_back(i);
                freq = cont;
            }

            else if(cont == freq){
                aero.push_back(i);
            }
            cont = 0;
        }

        cout << "Teste " << t << endl;

        for(int i = 0; i < aero.size(); i++){
            if(i != aero.size()-1){
                cout << aero[i] << " ";
            }
            else{
                cout << aero[i] << endl;
            }
        }
        t++;
    }
    return 0;
}