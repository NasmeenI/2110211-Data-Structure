#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main() {
    map<ll ,ll> mymap;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++) {
      ll a,b;
      cin >> a >> b;
      mymap[b] = a;
    }

    while(m--) {
      ll a,b;
      cin >> a >> b;
      map<ll, ll>::iterator it1,it2,it3,it4;
      it1 = mymap.find(a);
      if(it1 != mymap.end()) {
        it2 = mymap.find(it1->second);
      }

      it3 = mymap.find(b);
      if(it3 != mymap.end()) {
        it4 = mymap.find(it3->second);
      }

      if(a != b and (it1 != mymap.end() and it3 != mymap.end() and it2 != mymap.end() and it4 != mymap.end() and it2->second == it4->second)) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
}
