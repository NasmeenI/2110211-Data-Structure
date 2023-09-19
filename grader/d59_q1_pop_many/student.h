#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  mSize = (int(mSize - K) >= 0 ? mSize - K : 0);
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> temp;
  for(size_t i=(int(mSize - K) >= 0 ? mSize - K : 0);i<size();i++) {
    temp.push(mData[i]);
  }
  multi_pop(K);
  return temp;
}

#endif
