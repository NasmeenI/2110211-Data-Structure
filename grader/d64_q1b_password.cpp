#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,l;
    cin >> n >> m >> l;
    vector<int> v(l);
    for(int i=0;i<l;i++) {
        cin >> v[i];
        v[i] %= 26;
    }

    set<string> s;
    for(int i=0;i<n;i++) {
        string x;
        cin >> x;
        s.insert(x);
    }

    for(int i=0;i<m;i++) {
        string x;
        cin >> x;
        for(int j=0;j<x.size();j++) {
            x[j] = char(x[j]+v[j] > 122 ? x[j]+v[j]-26 : x[j]+v[j]);
        }
        cout << (s.find(x) == s.end() ? "Unknown" : "Match") << "\n";
    }
}