#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <queue>
#include <cmath>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  std::queue<size_t> q;
  q.push(0);
  while(q.size()) {
    size_t i = q.front();
    q.pop();
    if(i >= size()) continue;
    if(floor(log2(i+1)) == k) r.push_back(mData[i]);
    else {
      q.push(i*2+1);
      q.push(i*2+2);
    }
  }
  std::sort(r.rbegin(), r.rend(), mLess);
  return r;
}

#endif

