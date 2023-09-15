#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;

  int n;
  cin >> n;
  while(n--) {
    string x;
    cin >> x;
    if(x == "pb") {
      int y;
      cin >> y;
      v.push_back(y);
    }
    else if(x == "sa") {
      sort(v.begin(), v.end());
    }
    else if(x == "sd") {
      sort(v.begin(), v.end(), greater<int>());
    }
    else if(x == "r") {
      reverse(v.begin(), v.end());
    }
    else if(x == "d") {
      int y;
      cin >> y;
      v.erase(v.begin() + y);
    }
  }

  for(int i=0;i<v.size();i++) {
    cout << v[i] << ' ';
  }
}