#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  std::vector<T> temp(size());
  for(int i=first-begin(); i<last-begin(); i++) temp[i] = mData[i];

  for(int i=first-begin(); i<last-begin(); i++) {
    int p = i - k;
    if(p < first - begin()) p += (last - begin()) - (first - begin());
    mData[p] = temp[i];
  }
}

#endif
