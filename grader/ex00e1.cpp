#include <iostream>
using namespace std;

int main(){
  int h,m,x;
  cin >> h >> m >> x;
  h += (m + x) / 60;
  m = (m + x) % 60;
  if(h >= 24) h -= 24;
  
  string a;
  if(h < 10) a = "0" + to_string(h);
  else a = to_string(h);
  
  string b;
  if(m < 10) b = "0" + to_string(m);
  else b = to_string(m);
  cout << a << ' ' << b;
}