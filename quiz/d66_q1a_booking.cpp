#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    set<pair<string,string>> s;
    for(int i=0;i<n;i++) {
        string s1,s2;
        cin >> s1 >> s2;
        s.insert({s1, s2});
    }
    
    for(int i=0;i<m;i++) {
        int x;
        cin >> x;
        bool ck = true;
        vector<pair<string,string>> v;
        for(int j=0;j<x;j++) {
            string s1,s2;
            cin >> s1 >> s2;
            v.push_back({s1, s2});
            if(!s.count({s1, s2})) ck = false;
        }

        if(ck) {
            for(auto e:v) s.erase(e);
            std::cout << "YES\n";
        }
        else std::cout << "NO\n";    
    }
}