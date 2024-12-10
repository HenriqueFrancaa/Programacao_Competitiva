#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int x;
    vector<int>row(n,0);
    vector<int>col(m,0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            row[i]+= x;
            col[j]+= x;
        }
    }

    sort(row.begin(), row.end());
    sort(col.begin(), col.end());

    cout << max(row[row.size()-1], col[col.size()-1]) << endl;

    return 0;
}