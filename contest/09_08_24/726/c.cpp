#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<char, int>> nl (26);
    vector<pair<char, int>> en (26);

    char j = 'a';
    for(int i = 0; i < 26; i++) {
        en[i].first = nl[i].first = j++;
    }

    string bl= "\n";
    string inp1, inp2;
    string in1 ="", in2="";
    while(getline(cin, inp1)) {
        if(inp1.compare("") == 0) break;
        in1+=inp1;
    }
    
    while(getline(cin, inp2)) {
        in2+=inp2;
        in2+=bl;
    }

    for(string::iterator it = in1.begin(); it != in1.end(); it++) {
        if(*it >= 65 && *it <= 90) {
            nl[(int) *it-65].second++;
        } else if(*it >= 97 && *it <= 122) {
            nl[(int) *it-97].second++;
        }
    }

    for(string::iterator it = in2.begin(); it != in2.end(); it++) {
        if(*it >= 65 && *it <= 90) {
            en[(int) *it-65].second++;
        } else if(*it >= 97 && *it <= 122) {
            en[(int) *it-97].second++;
        }
    }

    sort(nl.begin(), nl.end(), [](pair<char, int> left, pair<char, int> right) {
            if(left.second == right.second) return left.first < right.first;
            return left.second > right.second;
            });
    
    sort(en.begin(), en.end(), [](pair<char, int> left, pair<char, int> right) {
            if(left.second == right.second) return left.first < right.first;
            return left.second > right.second;
            });

    vector<pair<char, int>> pt (26);
    int i = 'a';
    for(int c = 0; c<26; c++) {
        pt[c].first = i++;
        pt[en[c].first-97].second = c;
    }

    string ans = "";
    for(string::iterator it = in2.begin(); it != in2.end(); it++) {
        int let = (int) *it;
        if(*it >= 65 && *it <= 90) {
            ans+=nl[pt[let-65].second].first-32;
            continue;
        } else if(*it >= 97 && *it <= 122) {
            ans+=nl[pt[let-97].second].first;
            continue;
        }
        ans+=*it;
    }

    cout << ans;
    return 0;
}
