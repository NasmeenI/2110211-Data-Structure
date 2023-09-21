#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  CP::stack<T> temp;
  for(int i=0;i<size()-k;i++) temp.push(mData[i]);
  for(int i=std::max(0, int(s2.size())-m);i<s2.size();i++) temp.push(s2.mData[i]);
  for(int i=size()-k;i<size();i++) temp.push(mData[i]);
  
  *this = temp;
  s2.mSize = std::max(0, int(s2.size())-m);
}
#endif
