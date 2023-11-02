#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    map<int, int> mp;
    set<pair<int, int>> s;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        mp[x] = 0;
    }

    for(int i=0;i<m;i++) {
        int x;
        cin >> x;
        if(x == 1) {
            int a,b;
            cin >> a >> b;
            if(!mp.count(a)) continue;

            auto it = s.find({mp[a], a});
            if(it != s.end()) s.erase(it);
            mp[a] += b;
            s.insert({mp[a], a});
        }
        else {
            int k;
            cin >> k;
            auto it = s.lower_bound({k, -2e9});

            if(it == s.begin()) cout << "NONE\n";
            else cout << (--it)->second << '\n';
        }
    }
}
