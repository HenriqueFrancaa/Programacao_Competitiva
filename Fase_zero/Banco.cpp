#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int a, b, c;
    char tipo;
    cin >> a >> b >> c >> tipo;

    long long int questao = 0;

    if (tipo == 'A') {
        long long int BA = (a / 3) * 2;
        questao = BA * 2;
    }
    else if (tipo == 'B') {
        long long int AB = (b / 2) * 3;
        long long int CB = (b / 2) * 5;
        questao = min(AB, CB);
    }
    else if (tipo == 'C') {
        long long int BC = (c / 5) * 2;
        questao = BC;
    }

    cout << questao << endl;

    return 0;
}