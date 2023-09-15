#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    for(int i=0;i<=30;i++) v.push_back(pow(2, i));

    int x;
    cin >> x;
    cout << (*lower_bound(v.begin(), v.end(), x) - x);
}