#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    set<int> s;
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << (*s.begin() == 1 and *(--s.end()) == n and s.size() == n ? "YES" : "NO");
}