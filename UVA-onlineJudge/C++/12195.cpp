#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string jingle;
    //char letters[];
    //float values[], 
    float time, sum;
    int rightValues, i, n;

    char letters[7] = {'w', 'H', 'Q', 'E', 'S', 'T', 'X'};
    float values[7] = {1, 1/2, 1/4, 1/8, 1/16, 1/32, 1/64};
    rightValues = 0;
    n = sizeof(letters)/sizeof(letters[0]);

    
        cin >> jingle;
        for(i = 1; i < jingle.size(); i++)
        {
            sum = 0;
            while(jingle[i] != '/')
            {
                //non-class type error using find
                time = values(find(letters, letters + n, jingle[i]));
                sum = sum + time;
                
            }
            if(sum == 1.0)
            {
               rightValues++;
            }
        }
    

    return 0;

}