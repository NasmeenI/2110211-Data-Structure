#include <iostream>
#include <vector>
using namespace std;

void remove_even(vector<int> &v,int a,int b) {
  //write your code only in this function
  for(int i=b;i>=a;i--) {
    if(i % 2 == 0) v.erase(v.begin() + i);
  }
}

int main() {
  int n,a,b;
  cin >> n;
  vector<int> v;

  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;
  remove_even(v,a,b);

  for(int i=0;i<v.size();i++) {
    cout << v[i] << ' ';
  }
  cout << endl;
}