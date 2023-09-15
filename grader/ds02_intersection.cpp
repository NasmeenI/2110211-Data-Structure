#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int> v1, vector<int> v2) { 
  vector<int> v;
  for(int i=0;i<v1.size();i++) {
    vector<int>::iterator it = find(v2.begin(), v2.end(), v1[i]);
    if(it != v2.end()) {
      if(find(v.begin(), v.end(), v1[i]) == v.end()) v.push_back(v1[i]);
      v2.erase(it);
    }
  }
  return v;
}

int main() {
  int a,b;
  cin >> a >> b;
  vector<int> v1,v2;
  for(int i=0;i<a;i++) {
    int x;
    cin >> x;
    v1.push_back(x);
  }
  for(int i=0;i<b;i++) {
    int x;
    cin >> x;
    v2.push_back(x);
  }

  vector<int> v = intersection(v1, v2);
  sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++){
    cout << v[i] << ' ';
  }
}
