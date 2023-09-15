#include <iostream>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout << std::fixed << std::setprecision(2);
  map<string, pair<float, float> > sub, ins;
  int n;
  cin >> n;
  for(int i=0;i<n;i++) {
    string a,b;
    float c;
    cin >> a >> b >> c;
    sub[a].first += c;
    sub[a].second ++;
    ins[b].first += c;
    ins[b].second ++;
  }

  vector< pair<string, float> > v;
  for(map<string, pair<float, float> >::iterator it = sub.begin(); it != sub.end(); it++) {
    v.push_back(make_pair(it->first, it->second.first/it->second.second));
  }
  for(int i=0;i<v.size();i++) {
    cout << v[i].first << ' ' << v[i].second << "\n";
  }

  v.clear();
  for(map<string, pair<float, float> >::iterator it = ins.begin(); it != ins.end(); it++) {
    v.push_back(make_pair(it->first, it->second.first/it->second.second));
  }
  for(int i=0;i<v.size();i++) {
    cout << v[i].first << ' ' << v[i].second << "\n";
  }
}
