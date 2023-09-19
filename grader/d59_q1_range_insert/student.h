#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  size_t pos = position - begin();
  size_t num = last - first;
  ensureCapacity(mSize + num);
  for(size_t i = mSize+num-1;i > pos+num-1;i--) {
    mData[i] = mData[i-num];
  }

  for(size_t i=pos; i<pos+num; i++) {
    mData[i] = *first;
    first++;
  }
  mSize += num;
}

#endif
