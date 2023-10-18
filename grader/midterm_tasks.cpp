#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

#define st first
#define nd second

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<pair<string, pair<string, int>>> v; 
    for(int i=0;i<m;i++) {
        string x,y;
        int z;
        cin >> x >> y >> z;
        v.push_back({x, {y, z}});
    }

    vector<string> finish_task;
    map<string, int> client_total;
    priority_queue<pair<int, pair<string, string>>, vector<pair<int, pair<string, string>>>, greater<pair<int, pair<string, string>>>> q;
    for(int i=0;i<m;i++) {
        if(i < n) {
            q.push({v[i].nd.nd, {v[i].nd.st, v[i].st}});
            continue;
        }
        finish_task.push_back(q.top().nd.st);
        client_total[q.top().nd.nd] += q.top().st;

        q.push({q.top().st + v[i].nd.nd, {v[i].nd.st, v[i].st}});
        q.pop();
    }
    while(q.size()) {
        finish_task.push_back(q.top().nd.st);
        client_total[q.top().nd.nd] += q.top().st;
        q.pop();
    }
}