#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  //write your code here
  //
  if(size() != other.size()) return false;
  for(int i=0;i<size();i++) {
    if(mData[(int(mFront)+i)%int(mCap)] != other.mData[(int(other.mFront)+i)%int(other.mCap)]) return false;
  }
  return true;
  // YOU CANNOT CALL push or pop
}

#endif
