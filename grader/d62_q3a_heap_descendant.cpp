#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n,a;
    std::cin >> n >> a;
    std::queue<int> q;
    std::vector<int> v;
    q.push(a);
    while(q.size()) {
        int x = q.front();
        q.pop();
        v.push_back(x);
        if(2*x+1 < n) q.push(2*x+1);
        if(2*x+2 < n) q.push(2*x+2);
    }
    std::cout << v.size() << '\n';
    for(auto e:v) std::cout << e << ' ';
}