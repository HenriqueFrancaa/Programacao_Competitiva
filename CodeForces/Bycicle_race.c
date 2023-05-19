#include <stdio.h>

int main(){
    
    int testes, i;
    scanf("%d",&testes);
    int perigo = 0;

    int x0,y0,x1,y1,x2,y2;
    scanf("%d %d", &x0, &y0);
    scanf("%d %d", &x1, &y1);
    testes = testes;

    char sentido_atual;
    char sentido_futuro;

    while(i < testes - 1){
        scanf("%d %d", &x2, &y2);
        if(x1 == x0){
            if(y1 > y0){
                sentido_atual = 'N';
                if(x2 > x1){
                    sentido_futuro = 'L';
                }
                if(x2 < x1){
                    sentido_futuro = 'O';
                }
            }
            if(y1 < y0){
                sentido_atual = 'S';
                if(x2 > x1){
                    sentido_futuro = 'L';
                }
                if(x2 < x1){
                    sentido_futuro = 'O';
                }
            }
        }

        if(y0 == y1){
            if(x1 > x0){
                sentido_atual = 'L';
                if(y2 > y1){
                    sentido_futuro = 'N';
                }
                if(y2 < y1){
                    sentido_futuro = 'S';
                }
            }
            if(x1 < x0){
                sentido_atual = 'O';
                if(y2 > y1){
                    sentido_futuro = 'N';
                }
                if(y2 < y1){
                    sentido_futuro = 'S';
                }
            }
            
        }

        if(sentido_atual == 'L' && sentido_futuro == 'N'){
			perigo++;
		}
		else if(sentido_atual == 'N' && sentido_futuro == 'O'){
			perigo++;
		}
		else if(sentido_atual == 'O' && sentido_futuro == 'S'){
			perigo++;
		} 
		else if(sentido_atual == 'S' && sentido_futuro == 'L'){
			perigo++;
		}
		
        x0 = x1;
        y0 = y1;
        x1 = x2;
        y1 = y2;

        i++;
    }
    printf("%d",perigo);

    return 0;

    /*QUESTÂO do CodeForces - BYCICLE RACE em linguagem C:*/
}