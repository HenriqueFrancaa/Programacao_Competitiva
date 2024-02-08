#include <iostream>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;

bool validate(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)return false;
    }
    return true;
}

int soma(int n){
    int s = 0;
    while(n != 0){
        s += n%10;
        n/=10;
    }
    return s;
}

int main(){
    int prefix[1000001];
    int sum = 0;
    int num,a,b,n;
    for(int i = 2; i <= 1000000; i++){
        if(validate(i)){
            num = soma(i);
            if(validate(num)){
                sum++;
            }
            prefix[i] = sum;
        }
        else{
            prefix[i] = sum;
        }

    }
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        int res = prefix[b] - prefix[a-1];
        printf("%d\n", res);
    }
    //Uva online judge - Digit Prime
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1474
    return 0;
}