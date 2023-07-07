#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, D, R, length, over, total;
    vector<unsigned int>morning;
    vector<unsigned int>evening;
    vector<unsigned int>overtime;

    while(1){
        cin >> N >> D >> R;
        total = 0;
        if(N == 0 && D == 0 && R == 0) break;
        for(int i = 0; i < N; i++){
            cin >> length;
            morning.push_back(length);            
        }
        for(int i = 0; i < N; i++){
            cin >> length;
            evening.push_back(length);            
        }
        // ordenando os vetores
        sort(morning.begin(), morning.end()); // crescente
        sort(evening.begin(), evening.end(), greater<int>()); // decrescente

        for(int j = 0; j < morning.size(); j++){
            if(morning[j] + evening[j] > D){
                over = (morning[j] + evening[j]) - D;
                overtime.push_back(over);
            }
        }
        for(int k = 0; k < overtime.size(); k++){
            total += overtime[k] * R;
        }
        
        cout << total << endl;
        morning.clear();
        evening.clear();
        overtime.clear();
    }

    return 0;
}