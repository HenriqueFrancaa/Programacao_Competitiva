#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, op, x;
    while(cin >> t){
        priority_queue<int>pq;
        queue<int>q;
        stack<int>s;
        vector<int>data(3, 1); //0 -> prior; 1 -> queue; 2 -> stack;
        for(int i = 0; i < t; i++){
            cin >> op >> x;
            if(op == 1){
                pq.push(x);
                q.push(x);
                s.push(x);
            }else{
                if(!pq.empty()){
                    int a = pq.top();
                    int b = q.front();
                    int c = s.top();
                    if(x != a){
                        data[0] = 0;
                    }
                    if(x != b){
                        data[1] = 0;
                    }
                    if(x != c){
                        data[2] = 0;
                    }
                    pq.pop();
                    q.pop();
                    s.pop();
                }else{
                    data[0] = data[1] = data[2] = 0;
                }
            }
        }
        if((data[0] && data[2]) || (data[0] && data[1]) || (data[1] && data[2])){
            cout << "not sure" << endl;
        }
        else if(data[0]){
            cout << "priority queue" << endl;
        }
        else if(data[1]){
            cout << "queue" << endl;
        }
        else if(data[2]){
            cout << "stack" << endl;
        }else{
            cout << "impossible" << endl;
        }
    }
    //I can guess the data structure
    //https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3146
    return 0;
}