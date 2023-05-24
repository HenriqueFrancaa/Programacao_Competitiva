#include <iostream>
#include <string>
using namespace std;

int main(){
    
	int contador = 0;
	string numeros;
    cin >> numeros;
	
	for(int i = 0; i < numeros.size(); i++){

		if(numeros[i] == '4' || numeros[i] == '7'){
			contador++;
		}

	}

    string count = to_string(contador);
    int verif = 0;
    for(int i = 0; i < count.size(); i++ ){

        if(count[i] == '4' || count[i] == '7'){
            verif++;
        }
    }

    if(verif == count.size()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

	return 0;
}