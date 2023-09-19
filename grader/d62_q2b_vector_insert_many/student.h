#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::sort(data.begin(), data.end());

  int ind = 0;
  std::vector<T> v;
  for(int i=0;i<size();i++) {
    if(i == data[ind].first) {
      v.push_back(data[ind].second);
      ind++;
    }
    v.push_back(mData[i]);
  }
  if(ind < data.size() and data[ind].first == size()) v.push_back(data[ind].second);

  ensureCapacity(v.size());
  for(int i=0;i<v.size();i++) {
    mData[i] = v[i];
  }
  mSize = v.size();
}

#endif
