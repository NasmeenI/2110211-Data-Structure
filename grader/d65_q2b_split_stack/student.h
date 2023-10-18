#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  int ind = 0;
  std::vector<CP::stack<T>> temp(k);
  for(int i=0;i<size();i++) {
    temp[(ind++) % k].push(mData[size() - i - 1]);
  }

  std::vector<std::vector<T>> v(k);
  for(int i=0;i<k;i++) {
    while(temp[i].size()) {
      v[i].push_back(temp[i].top());
      temp[i].pop();
    }
  }
  return v;
}

#endif

