#include <iostream>
#include <vector>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n,m;
    std::cin >> n >> m;
    std::vector<std::pair<int,int>> v(n);
    for(int i=0;i<n;i++) std::cin >> v[i].first;
    for(int i=0;i<n;i++) std::cin >> v[i].second;

    std::vector<int> power(m, 1);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> q;
    for(int i=0;i<m;i++) q.push({power[i], i});
    for(int i=0;i<n;i++) {
        if(power[v[i].second] < v[i].first) {
            power[v[i].second] = v[i].first;
            q.push({power[v[i].second], v[i].second});
        }

        while(true) {
            if(q.top().first != power[q.top().second]) q.pop();
            else {
                std::cout << q.top().first << ' ';
                break;
            }
        }
    }
}
/*
5 5 
1 2 3 4 5
0 1 2 3 4
5 2
1 10 5 15 12 
0 0 1 1 0
*/