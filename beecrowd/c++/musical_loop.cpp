#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,h;
	while(true){
		cin >> n;
		int cont = 0;
		vector<int>waves;
		if(n == 0)break;
		for(int i = 0; i < n; i++){
			cin >> h;
			waves.push_back(h);
		}
		if(waves[0] > waves[1] && waves[0] > waves[n-1]){
			cont++;
		}
		if(waves[n-1] > waves[n - 2] && waves[n-1] > waves[0]){
			cont++;
		}
		if(waves[0] < waves[n-1] && waves[0] < waves[1])cont++;

		if(waves[n-1] < waves[n-2] && waves[n-1] < waves[0])cont++;

		for(int i = 1; i < waves.size()-1; i++){
			if(waves[i] > waves[i-1] && waves[i] > waves[i+1]){
				cont++;
			}
			if(waves[i] < waves[i-1] && waves[i] < waves[i+1])cont++;
		}
		cout << cont << endl;
		waves.clear();
	}
	return 0;
}
