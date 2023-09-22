#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  mData[(int(mFront) + int(mCap) - 1) % int(mCap)] = mData[(int(mFront) + int(mSize) - 1) % int(mCap)];
  mFront = (int(mFront) + int(mCap) - 1) % int(mCap);
}

#endif
