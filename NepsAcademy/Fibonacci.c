#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int c,i,n;
    
    scanf("%d",&n);
    
    for(i = 0;i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    if(n == 0){
        c = 1;
    }

    printf("%d\n", c);

    return 0;
}
