#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> mymap;
    int n;
    cin >> n;
    while(n--) {
        string x;
        cin >> x;
        mymap[x]++;
    }
    vector< pair<string, int> > v;
    for(map<string, int>::iterator it = mymap.begin(); it != mymap.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++) {
        if(v[i].second > 1) cout << v[i].first << ' ' << v[i].second << endl;
    }
}