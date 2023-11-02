#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    multiset<int> ms;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int ans = -1;
    for(int i=0;i<m;i++) {
        int x;
        cin >> x;
        for(int j=0;j<x;j++) {
            int y;
            cin >> y;
            if(ans != -1) break;
            multiset<int>::iterator it = ms.upper_bound(y);
            if(it == ms.end()) {
                ans = i+1;
                break;
            }
            ms.erase(it);
        }
    }
    cout << (ans == -1 ? m+1 : ans);
}
