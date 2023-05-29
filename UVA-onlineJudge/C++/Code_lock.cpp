#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{   
    string letras;
    char names[100];
    int i, q;
    cin >> letras;
    while(letras[0] != '*'){
   
    int count = 0;
    if(letras[0] != 'a'){
        char l = 'a';
        letras.push_back(l);
    }

    for(i = 0; i < letras.size(); i++ )
    {
        if(letras[i] != letras[i+1]){
            count++;
        }

    }

    count = count - 1;

    cout << count << endl;

    return 0;
    
}

}