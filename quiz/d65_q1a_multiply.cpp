#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator,int>> &multiply) {
    //write your code here
    vector<int> temp;
    vector<pair<int, int>> indexMultiply;
    for(int i=0;i<multiply.size();i++) {
        indexMultiply.push_back({multiply[i].first - v.begin(), multiply[i].second});
    }
    sort(indexMultiply.begin(), indexMultiply.end());
  
    int index = 0;
    for(int i=0;i<v.size();i++) {
      if(i == indexMultiply[index].first) {
          for(int j=0;j<indexMultiply[index].second;j++) {
              temp.push_back(v[i]);
          }
          index++;
      }
      temp.push_back(v[i]);
    }
  
    v = temp;
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<int> v(n); 
    vector<pair<vector<int>::iterator,int>> multiply(m); 
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b; 
        multiply[i].first = v.begin()+a; 
        multiply[i].second = b;
    } 
    
    member_multiply(v,multiply);
    cout << "======= result ========" << endl; 
    cout << v.size() << endl;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}