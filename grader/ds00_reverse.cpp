#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v,int a,int b) {
  //write your code only in this function
  for(int i=a;i<=(a+b)/2;i++) {
    swap(v[i], v[b-i+a]);
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
  reverse(v,a,b);

  for(int i=0;i<v.size();i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}