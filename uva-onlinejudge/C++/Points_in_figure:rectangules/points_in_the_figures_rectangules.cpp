#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char c; int i = 0;
    double rectangle[10][4];
    double x1, y1, x2, y2;
    while(cin >> c && c != '*'){
        cin >> x1 >> y1 >> x2 >> y2;
        rectangle[i][0] = x1;
        rectangle[i][1] = y1;
        rectangle[i][2] = x2;
        rectangle[i][3] = y2;
        i++;
    }
    double x, y;
    int point = 1;
    while(cin >> x >> y){
        bool contained = false;
        if(x == 9999.9 && y == 9999.9){ break; }
        for(int j = 0; j < i; j++){
            x1 = rectangle[j][0];
            y1 = rectangle[j][1];
            x2 = rectangle[j][2];
            y2 = rectangle[j][3];
            if(x > x1 && x < x2 && y < y1 && y > y2){
                printf("Point %d is contained in figure %d\n", point, j+1);
                contained = true;
            }
        }
        if(!contained){
            printf("Point %d is not contained in any figure\n", point);
        }
        point++;
    }

    return 0;
}
/*Uva-OnlineJudge 476 - Points in Figures: Rectangles
https://onlinejudge.org/external/4/476.pdf */