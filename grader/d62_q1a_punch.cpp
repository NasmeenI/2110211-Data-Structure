#include <iostream>
#include <vector>

using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
  //write some code here
  //don’t forget to return something
  
  for(vector<string>::iterator it1 = v.begin() + min(int(it-v.begin()+k), int(v.size()-1)); it1 >= v.begin() + max(int(it-v.begin()-k), 0); it1--) {
    v.erase(it1); 
  }
  return v;
}
int main() {
  int n,j,k;
  cin >> n >> j >> k;
  vector<string> v(n);
  for (int i = 0;i < n;i++) {
    cin >> v[i]; 
  }

  cout << "Result after punch" << endl;
  vector<string> result = punch(v, v.begin() + j, k);
  for (int i=0;i<result.size();i++) {
    cout <<  result[i] << endl; 
  }
}