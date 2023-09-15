#include <iostream>
using namespace std;

int main(){
  int n,m,t;
  cin >> n >> m >> t;

  int a[n][m];
  for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];

  while(t--){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 > x2 || y1 > y2) cout << "INVALID" << endl;
    else{
      int mx = -100000;
      bool ck = false;
      for(int i=x1-1;i<=x2-1;i++){
        for(int j=y1-1;j<=y2-1;j++){
          if(i >= n || j >= m) mx = max(mx, 1);
          else {
            mx = max(mx, a[i][j]);
            ck = true;
          }
        }
      }
      if(!ck) cout << "OUTSIDE" << endl;
      cout << mx << endl;
    }
  }
}