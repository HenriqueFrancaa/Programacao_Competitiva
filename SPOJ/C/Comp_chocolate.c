#include <stdio.h>

int main(){

    int n,m;
    scanf("%d %d", &n, &m);

    int player = 0;

    while( n > 0 ){
	    if(n >= m){
		    n = n - m;
        }
        else{
            n = n - 1;
        }

        player++;
    }

    if(player%2 == 0){
        printf("Carlos\n");
    }
    else{
        printf("Paula\n");
    }

    return 0;

}
