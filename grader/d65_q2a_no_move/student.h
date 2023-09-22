#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  int dFirst = lower_bound(aux.begin(), aux.end(), idx) - aux.begin();
  int dSecond = (dFirst == 0 ? idx : idx - aux[dFirst - 1] - 1);
  return mData[dFirst][dSecond];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  aux.push_back(mCap-1);
}

#endif
