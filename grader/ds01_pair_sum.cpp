#include <cstdio>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n,m;
  cin >> n >> m;
  scanf("%d%d",&n,&m);
  unordered_map<int, int> mymap;
  for(int i=0;i<n;i++) {
    int x;
    scanf("%d",&x);
    mymap[x] += 1;
  }

  while(m--) {
    int x;
    scanf("%d",&x);

    bool ck = false;
    for(unordered_map<int, int>::iterator it=mymap.begin(); it != mymap.end(); it++) {
      unordered_map<int, int>::iterator it1 = mymap.find(x-it->first);
      if(it1 != mymap.end() && it1 != it) ck = true;
    }
    if(ck == false) printf("NO");
    else printf("YES");
  }
}