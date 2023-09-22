#include <stdio.h>
int main(){
    int velocidade,tempo, espaco;
    

    while(scanf("%d %d",&velocidade ,&tempo) == 2){

        espaco = velocidade * (2 * tempo);
        printf("%d\n", espaco);
            
    }
    return 0;
    /*10071 Uva Online Judge --> Back to High School Physics*/
}            
