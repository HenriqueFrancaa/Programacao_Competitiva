#include <bits/stdc++.h>

using namespace std;

#define mk make_pair

typedef vector<string> vs;

void out(map<string, vector<int>> m1, vector<pair<string, int>> v) {
    for(auto &x: m1) {
        if(x.second.size() > 1) continue;
        v[x.second[0]].second++;
    }

    sort(v.begin(), v.end(), [](pair<string, int> &left, pair<string, int> &right) {
            if(left.second == right.second) return left.first < right.first;
            return left.second > right.second;
            });

    for(auto &x : v) {
        cout << x.first << " " << x.second << endl;
    }
    return ;
}

int main() {
    int i = -1;
    map<string, vector<int>> m1;
    vector<pair<string, int>> vsi;
    map<string, int> cur;
    string inp;

    while(getline(cin, inp)) {
        if(inp == "0") return 0;
        if(inp == "1") {
            out(m1, vsi);
            i = -1;
            m1.clear();
            vsi.clear();
            cur.clear();
            continue;
        }

        if(*(inp.begin()) >= 65 && *(inp.begin()) <= 90) {
            vsi.push_back(mk(inp, 0));
            i++;
            cur.clear();

            continue;
        }

        if(cur[inp] == 0) {
            m1[inp].push_back(i);
            cur[inp]++;
        }
    }
}
