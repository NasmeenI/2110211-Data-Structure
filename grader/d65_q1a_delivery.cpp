#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main() {
  int n,m;
  std::cin >> n >> m;
  std::vector<int> ans(m+1);
  std::vector<std::pair<int,int>> v(m);
  for(int i=0;i<m;i++) {
    std::cin >> v[i].first;
    v[i].second = i+1;
  }
  std::sort(v.begin(), v.end());

  int sum = 0, ind = 0, cnt = 1;
  std::queue<int> q1, q2;
  for(int i=0;i<n;i++) {
    int a;
    std::cin >> a;
    if(a == 1) {
      int b,c;
      std::cin >> b >> c;
      if(b == 1) q1.push(c);
      else q2.push(c);
    }
    else {
      if(!q1.size()) {
        sum += q2.front();
        q2.pop();
      }
      else if(!q2.size()) {
        sum += q1.front();
        q1.pop();
      }
      else if(q1.front() < q2.front()) {
        sum += q1.front();
        q1.pop();
      }
      else if(q1.front() > q2.front()) {
        sum += q2.front();
        q2.pop();
      }
      else {
        sum += q1.front();
        q1.pop();
      }

      while(ind < m and v[ind].first <= sum) {
        ans[v[ind].second] = cnt;
        ind++;
      }
      cnt++;
    }
  }

  for(int i=1;i<=m;i++) {
    std::cout << (ans[i] == 0 ? -1 : ans[i]) << ' ';
  }
}