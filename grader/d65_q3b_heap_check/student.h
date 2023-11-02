#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include <queue>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  std::queue<size_t> q;
  q.push(0);
  while(q.size()) {
    size_t i = q.front();
    q.pop();
    if(2*i+1 < size()) {
      if(mLess(mData[i], mData[2*i+1])) return false;
       q.push(2*i+1);
    }
    if(2*i+2 < size()) {
      if(mLess(mData[i], mData[2*i+2])) return false;
       q.push(2*i+2);
    }
  }
  return true;
}

#endif