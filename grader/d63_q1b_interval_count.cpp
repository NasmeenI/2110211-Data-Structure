#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    while(m--) {
        int p;
        cin >> p;
        vector<int>::iterator upper = upper_bound(v.begin(), v.end(), p+k);
        vector<int>::iterator lower = lower_bound(v.begin(), v.end(), p-k);
        int ans =(upper - v.begin()) - (lower - v.begin());
        cout << ans << ' ';
    }
}
