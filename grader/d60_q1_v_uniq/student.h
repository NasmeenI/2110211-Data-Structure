#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <set>
#include <vector>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> s;
  CP::vector<T> temp;
  for(int i=0;i<size();i++) {
    if(!s.count(mData[i])) {
      s.insert(mData[i]);
      temp.push_back(mData[i]);
    }
  }

  for(int i=0;i<temp.size();i++) {
    mData[i] = temp[i];
  }
  mSize = temp.size();
}

#endif
