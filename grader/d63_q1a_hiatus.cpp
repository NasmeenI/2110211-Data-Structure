#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector< pair<int, int> > v(n);
    for(int i=0;i<n;i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());

    while(m--) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        int index = upper_bound(v.begin(), v.end(), p)- v.begin();  

        if(index == 0) cout << "-1 -1 ";
        else if(v[index-1] == p) cout << "0 0 ";
        else cout << v[index-1].first << ' ' << v[index-1].second << ' ';     
    }
}