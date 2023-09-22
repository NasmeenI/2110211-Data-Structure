#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(m < 0) return false;
  if(a - begin() < 0 or b - begin() < 0) return false;
  if((a < b) and (a - begin() + m - 1 >= b - begin())) return false;
  if((b < a) and (b - begin() + m - 1 >= a - begin())) return false;
  if((b - begin() + m - 1 >= size()) or (a - begin() + m - 1 >= size())) return false;

  for(int i=0;i<m;i++) {
    std::swap(mData[a - begin() + i], mData[b - begin() + i]);
  }
  return true;
}

#endif
