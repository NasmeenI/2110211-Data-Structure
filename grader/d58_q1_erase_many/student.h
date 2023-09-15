#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int indMark = pos[0];
  int indPos = 0;
  for(int indRun=pos[0];indRun<size();indRun++) {
    if(indPos < pos.size() and indRun == pos[indPos]) {
      indPos++;
    }
    else {
      mData[indMark] = mData[indRun];
      indMark++;
    }

    if(indRun == size()-1) mSize = indMark;
  }
}

#endif
