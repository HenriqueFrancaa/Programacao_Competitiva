#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int l,mt,m;
    cin >> l >> mt;
    int li = 0;
    int max_li = 0;
    vector<int>livros;
    for(int i = 0; i < l; i++){
        cin >> m;
        livros.push_back(m);
    }
    int left = 0;
    int right = 0;
    while(right < l){
	    li += livros[right];
	    if(li <= mt){
		    max_li += 1;
	    }else{
		    li -= livros[left];
		    left++;
	    }
	    right++;
    }

/*
    for(int i = 0; i < l; i++){
        for(int j = i; j < l; j++){
            if(livros[j] <= mt){
                li++;
                mt -= livros[j];
                if(li > max_li){
                    max_li = li;
                }
            }
            else{
                li = 0;
                mt = temp;
                break;
            }
        }
    }
*/
    cout << max_li << endl;

    return 0;
}
