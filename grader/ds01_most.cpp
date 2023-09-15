#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> mymap;
  int n;
  cin >> n;
  while(n--) {
    string x;
    cin >> x;
    mymap[x] += 1;
  }

  int mx = 0;
  map<string, int>::iterator itAns;
  for(map<string, int>::iterator it = mymap.begin(); it != mymap.end(); it++) {
    if(it->second > mx) {
      mx = it->second;
      itAns = it;
    }
    else if(it->second == mx && it->first > itAns->first) {
      itAns = it;
    }
  }
  cout << itAns->first << ' ' << itAns->second;
}