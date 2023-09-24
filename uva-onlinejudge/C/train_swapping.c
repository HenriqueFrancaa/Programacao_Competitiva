#include <stdio.h>
#include <stdlib.h>

int cont = 0;

void swap(int *i, int *j){
    int t = *i;
    *i = *j;
    *j = t;
}


void sort(int *v, int n){
    int j = 0;
    int i;
    for( i = 1; i < n; i++){
        j = i;
        while(j > 0){
            if(*(v+j) < *(v+j-1)){
                swap((v+j), (v+j-1));
                j--;
                cont++;
            }
            else{
                break;
            }
        }
    }
}


int main(){
    int t,h;
    scanf("%d", &t);
    for( h = 0; h < t; h++){
        int n;
        int *v;
        scanf("%d", &n);
        v = (int *)(malloc(n * sizeof(int)));
        int i;
        for(i = 0; i < n; i++){
            scanf("%d", (v+i));
        }

        sort(v,n);

        printf("Optimal train swapping takes %d swaps.\n", cont);
        free(v);
        cont = 0;
    }
    return 0;
}
