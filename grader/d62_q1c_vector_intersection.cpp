#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(map<int, int> m1, map<int, int> m2) { 
  vector<int> v;
  for(map<int, int>::iterator it = m1.begin(); it != m1.end(); it++) {
    map<int, int>::iterator it2 = m2.find(it->first);
    if(it2 != m2.end()) v.push_back(it->first);
  }
  return v;
}

int main() {
  int a,b;
  cin >> a >> b;
  map<int, int> m1,m2;
  for(int i=0;i<a;i++) {
    int x;
    cin >> x;
    m1[x] = 1;
  }
  for(int i=0;i<b;i++) {
    int x;
    cin >> x;
    m2[x] = 1;
  }

  vector<int> v = intersection(m1, m2);
  sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++){
    cout << v[i] << ' ';
  }
}