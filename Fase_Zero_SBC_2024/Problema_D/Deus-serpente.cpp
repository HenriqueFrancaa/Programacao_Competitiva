#include <iostream>
using namespace std;

int main(){
    int E, V; cin >> E >> V;
    int h = E / V;
    int r = E % V;
    h += 19;
    int r2 = h % 24;
    r *= 60;
    r /= V;
    if(r2 < 10 && r < 10){
        printf("0%d:0%d\n", r2, r);
    }
    else if(r2 < 10 && r >= 10){
        printf("0%d:%d\n", r2, r);
    }
    else if(r2 >= 10 && r < 10){
        printf("%d:0%d\n", r2, r);
    }else{
        printf("%d:%d\n", r2, r);        
    }

    return 0;
}
