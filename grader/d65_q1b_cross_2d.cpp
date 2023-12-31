#include <iostream>
#include <vector>
using namespace std;

void cross_2d(vector<vector<int>> &m ,int r1, int r2, int c1, int c2) { 
    //your code here
    vector<vector<int>> v;
    for(int i=0;i<r1;i++) {
        vector<int> temp;
        for(int j=0;j<c1;j++) temp.push_back(m[i][j]);
        for(int j=c2+1;j<m[0].size();j++) temp.push_back(m[i][j]);
        v.push_back(temp);
    }
    for(int i=r2+1;i<m.size();i++) {
        vector<int> temp;
        for(int j=0;j<c1;j++) temp.push_back(m[i][j]);
        for(int j=c2+1;j<m[0].size();j++) temp.push_back(m[i][j]);
        v.push_back(temp);
    }
    m = v;
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    
    vector<vector<int>> m;
    int r,c,r1,r2,c1,c2;
    cin >> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i =0;i < r;i++) {
        m[i].resize(c);
        for (int j = 0;j < c;j++) {
            cin >> m[i][j];
        }
    }
    cross_2d(m,r1,r2,c1,c2);
    for (int i =0;i < m.size();i++) {
        for (int j = 0;j < m[i].size();j++) { 
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0; 
}