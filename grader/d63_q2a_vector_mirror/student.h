#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  int ind = size();
  for(int i=size()-1;i>=0;i--) {
    ensureCapacity(mSize + 1);
    mData[ind++] = mData[i];
    mSize++;
  }
}

#endif
