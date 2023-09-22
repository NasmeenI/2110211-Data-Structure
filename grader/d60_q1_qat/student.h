#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  return (idx >= 0 ? mData[(int(mFront) + idx) % int(mCap)] : mData[int(mFront + mSize + mCap - ind) % int(mCap)]);
}

#endif
