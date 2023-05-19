#include <stdio.h>


int main(){

    int helicoptero, policial, fugitivo, sentido;
    scanf("%d %d %d %d",&helicoptero, &policial, &fugitivo, &sentido);

    while(helicoptero != fugitivo && policial != fugitivo){
        if(sentido == -1){
            while(fugitivo != helicoptero && fugitivo != policial){
                fugitivo--;

                if(fugitivo == -1){
                    fugitivo = 15;
                }
            }
            if(fugitivo == helicoptero){
                printf("S\n");
            }
        
    } 

    


        if(sentido == 1){
            while(fugitivo != helicoptero && fugitivo != policial){
                fugitivo++;

                if(fugitivo == 16){
                    fugitivo = 0;
                } 
        }
        
            if(fugitivo == helicoptero){
                printf("S\n");
                }
        }
    }
    if(fugitivo == policial){
        printf("N\n");
        }

        return 0 ;
        
        /*QUESTÂO NEPSACADEMY - FUGA NO HELICOPTERO em linguagem C :*/

    } 







