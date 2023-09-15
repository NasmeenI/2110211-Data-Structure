#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,w;
    cin >> n >> w;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> v1(v.begin(), v.begin()+w);
    sort(v1.begin(), v1.end());

    multiset<int> l(v1.begin(), v1.begin()+w/2);
    multiset<int> r(v1.begin()+w/2, v1.begin()+w);

    vector<int> ans;
    for(int i=w;i<n;i++) {
        if(*(--l.end()) <= v[i]) r.insert(v[i]);
        else {
            r.insert(*(--l.end()));
            l.erase(--l.end());
            l.insert(v[i]);
        }
        ans.push_back(*(r.begin()));

        auto it = r.find(v[i-w]);
        if(it != r.end()) r.erase(it);
        else {
            l.erase(l.find(v[i-w]));
            l.insert(*(r.begin()));
            r.erase(r.begin());
        }
    }
    for(auto e:ans) cout << e << ' ';
}