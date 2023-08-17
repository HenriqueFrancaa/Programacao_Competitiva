#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string c;
	int q,li,ri;
	cin >> c;
	cin >> q;
	vector<int>ansewer;
	for(int i = 0; i < q; i++){
		cin >> li >> ri;
		int cont = 0;
		for(int j = li-1; j < ri-1; j++){
			if(c[j] == c[j+1]){
				cont++;
			}
		}
		ansewer.push_back(cont);
	}

	for(int i = 0; i < ansewer.size(); i++){
		cout << ansewer[i] << endl;
	}

	return 0;
	// time limit ---> test case 10
	}


