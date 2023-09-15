#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
  //write your code only in this function
  int a1 = a - v.begin();
  int b1 = b - v.begin() - 1;
  for(int i=a1;i<=(a1+b1)/2;i++) {
    swap(v[i], v[b1-i+a1]);
  }
}
int main() {
  //read input
  int n,a,b;
  cin >> n;
  vector<int> v;
  for (int i = 0;i < n;i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;
  //call function
  reverse(v,v.begin()+a,v.begin()+b+1);
  //display content of the vector
  for (int i=0;i<v.size();i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}