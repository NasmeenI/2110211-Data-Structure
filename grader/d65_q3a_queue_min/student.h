#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include <set>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  std::sort(pos.begin(), pos.end());
  T ans = mData[(int(mFront) + pos[0]) % int(mCap)];
  for(int i=1;i<pos.size();i++) {
    if(pos[i] >= size()) break;
    if(comp(mData[(int(mFront) + pos[i]) % int(mCap)], ans)) ans = mData[(int(mFront) + pos[i]) % int(mCap)];
  }
  
  //should return something
  return T(ans);
}

#endif