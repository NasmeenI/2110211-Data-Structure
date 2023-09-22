#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  for(int i=0; i<std::max(size(), other.size()); i++) {
    if(i == size() and i < other.size()) return true;
    if(mData[i] < other.mData[i]) return true;
    else if(mData[i] > other.mData[i]) return false;
  }
  return false;
}

#endif
