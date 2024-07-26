#include <bits/stdc++.h>
#define mk make_pair
#define pb push_back 

using namespace std;

int djk(vector<vector<int>> grapth, int startx, int starty, int endx, int endy) {
    vector<vector<int>> dist (10, vector<int> (endy+1, INT_MAX));

    set<pair<int, pair<int, int>>> s;
    s.insert(mk(0, mk(startx, starty)));
    dist[startx][starty] = 0;

    while(!s.empty()) {
        pair<int, int> cur = (s.begin()).second;
        int cost = (s.begin()).first;
        s.erase(s.begin());

        int x = cur.first;
        int y = cur.second;

        // subir
        if(x-1 >= 0) {
            if(dist[x-1][y+1] > cost+60+grapth[x-1][y+1]) {
                dist[x-1][y+1] = cost+60+grapth[x-1][y+1];
                s.insert(mk(dist[x-1][y+1], mk(x-1,y+1)));
            }
        }

        // manter
        if(dist[x][y+1] > cost+30+grapth[x][y+1]) {
            dist[x][y+1] = cost+30+grapth[x][y+1];
            s.insert(mk(dist[x][y+1], mk(x,y+1)));
        }

        // descer
        if(x+1 <= 9) {
            if(dist[x+1][y+1] > cost+20+grapth[x+1][y+1]) {
                dist[x+1][y+1] = cost+20+grapth[x+1][y+1];
                s.insert(mk(dist[x+1][y+1], mk(x+1,y+1)));
            }
        }
    }

    return dist[endx][endy];
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int miles;
        scanf("%d", &miles);
        miles/=100;

        vector<vector<int>> mapping (10, vector<int> (miles));

        for(int i = 0; i < 10; i++) { 
            for(int j = 0; j < miles-1; j++) {
                scanf("%d", &mapping[i][j]);
            }
        }

        cout << djk(mapping, 9, 0, 9, miles-1) << endl;
    }
    
    return 0;
}