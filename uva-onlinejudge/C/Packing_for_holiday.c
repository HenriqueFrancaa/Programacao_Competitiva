#include <stdio.h>

int main(){
    int testes;
    scanf("%d",&testes);


    int l, w, h, i;
    for(i = 1; i <= testes; i++){
        scanf("%d %d %d",&l, &w, &h);
        if(l <= 20 && w <= 20 && h <= 20){

            printf("Case %d: good\n",i);
        }
        
        else{
            printf("Case %d: bad\n",i);
        }         
    }

    return 0;
    /* 12372 Uva Online Judge --> Packing for a holiday*/
}
