#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  for(int i=a;i<=(a+b)/2;i++) {
    std::swap(mData[(int(mFront) + i) % int(mCap)], mData[(int(mFront) + a + b - i) % int(mCap)]);
  }
}

#endif
