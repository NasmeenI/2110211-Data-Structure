#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  map<string, int> mymap;
  int n,m;
  cin >> n >> m;
  for(int i=0;i<n;i++) {
    string x;
    cin >> x;
    mymap[x] += 1;
  }

  vector<int> v;
  for(map<string, int>::iterator it = mymap.begin(); it != mymap.end(); it++) {
    v.push_back(it->second);
  }
  sort(v.begin(), v.end(), greater<int>());
  if(m > int(v.size())) cout << v[v.size()-1];
  else cout << v[m-1];
}
