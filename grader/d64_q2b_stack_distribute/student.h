#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <vector>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  int ind = 1;
  int s = int(size());
  std::vector<std::vector<T>> v;
  for(int i=0; i<k; i++) {
    std::vector<T> temp;
    for(int j=0; j<s/k; j++) {
      temp.push_back(mData[s-ind++]);
    }
    if(i < s%k) temp.push_back(mData[s-ind++]);
    v.push_back(temp);
  }
  return v;
}
#endif
