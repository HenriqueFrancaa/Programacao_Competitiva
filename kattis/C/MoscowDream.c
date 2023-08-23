#include <stdio.h>

int main(){
    int a, b, c, n;
    scanf("%d %d %d %d",&a, &b, &c, &n);
    
    if(a == 0 || b == 0 || c ==0 || n <  3){
        printf("NO\n");
    }else if(a + b + c >= n){
        printf("YES\n");
    }else if(a + b + c < n){
        printf("NO\n");
    }

    return 0;
    /*QUESTÂO - KATTIS - the famous Moscow Dream em linguagem C:*/
}
