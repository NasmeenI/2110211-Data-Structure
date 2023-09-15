#include <iostream>
#include <vector>
using namespace std;

vector<int> connectVector(vector<int> v1, vector<int> v2, vector<int> v3) {
  vector<int> v;
  for(int i=0;i<v1.size();i++) v.push_back(v1[i]);
  for(int i=0;i<v2.size();i++) v.push_back(v2[i]);
  for(int i=0;i<v3.size();i++) v.push_back(v3[i]);
  return v;
}

void vector_swap(vector<int> &v1,vector<int> &v2,
    int start1, int end1,
    int start2, int end2) {
    vector<int> newv1 = connectVector(vector<int>(v1.begin(), v1.begin()+start1), vector<int>(v2.begin()+start2, v2.begin()+end2), vector<int>(v1.begin()+end1, v1.end()));
    vector<int> newv2 = connectVector(vector<int>(v2.begin(), v2.begin()+start2), vector<int>(v1.begin()+start1, v1.begin()+end1), vector<int>(v2.begin()+end2, v2.end()));
    v1 = newv1;
    v2 = newv2;
}

int main() {
  //read input
  int n,c;
  vector<int>v1,v2;
  cin >> n; //number of v1
  for (int i = 0;i < n;i++) {
    cin >> c;   
    v1.push_back(c);
  }
  cin >> n; //number of v2
  for (int i = 0;i < n;i++) {
    cin >> c;
    v2.push_back(c);
  }
  int s1,e1,s2,e2; //position
  cin >> s1 >> e1 >> s2 >> e2;
  //call the function
  vector_swap(v1,v2,s1,e1,s2,e2);
  //display content of the stack
  cout << "v1 has " << v1.size() << endl;
  for (int i=0;i<v1.size();i++) { cout << v1[i] << " "; }
  cout << endl;
  //display content of the stack
  cout << "v2 has " << v2.size() << endl;
  for (int i=0;i<v2.size();i++) { cout << v2[i] << " "; }
  cout << endl;
}