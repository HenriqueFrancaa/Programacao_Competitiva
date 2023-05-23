#include <stdio.h>

int main(){

    int xp,xn;
    scanf("%d %d",&xp,&xn);
    int grupo = 0;

    

    while(xp + xn >= 3 && xp > 0 && xn > 0){
        if(xp <= xn){
            xp = xp - 1;
            xn = xn - 2;
        }
        else{
            xp = xp - 2;
            xn = xn - 1;
        }

            grupo++;
    }

    printf("%d",grupo);

    return 0;

}
