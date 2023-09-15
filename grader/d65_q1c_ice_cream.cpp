#include <iostream>
#include <vector>
#include <algorithm>

#define N 1e6 + 10

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n,m,start;
    std::cin >> n >> m >> start;

    std::vector<std::pair<int, int>> v;
    for(int i=0;i<n;i++) {
        int a,b;
        std::cin >> a >> b;
        v.push_back({a, b});
    }
    std::sort(v.begin(), v.end());

    int index = 0;
    std::vector<int> qs(N);
    qs[0] = start;
    for(int i=1;i<N;i++) {
        if(index < v.size() and i == v[index].first) {
            start = v[index].second;
            index++;
        }
        qs[i] = qs[i-1] + start;
    }

    while(m--) {
        int p,x;
        std::cin >> p >> x;

        int i = lower_bound(qs.begin(), qs.end(), p) - qs.begin();
        if(i <= x) std::cout << i << ' ';
        else {
            int i1 = lower_bound(qs.begin(), qs.end(), p + qs[x]) - qs.begin();
            std::cout << i1 << ' ';
        }
    }
}
/*
2 5 3 
4 2 
6 5 
11 3 
12 3 
13 3 
200 4 
200 5
*/