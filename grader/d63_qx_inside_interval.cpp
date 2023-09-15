#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<int> v1(n), v2(n);
    for(int i=0;i<n;i++) cin >> v1[i] >> v2[i];
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    while(m--) {
        int x;
        cin >> x;
        int index = upper_bound(v1.begin(), v1.end(), x) - v1.begin();

        if(index == 0) cout << "0" << ' ';
        else cout << (v2[index-1] >= x ? "1" : "0") << ' ';
    }
}
