#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  //write your code here
  CP::priority_queue<T,Comp> temp1 = *this, temp2 = other;
  if(temp1.size() != temp2.size()) return false;
  while(temp1.size()) {
    if(temp1.top() != temp2.top()) return false;
    temp1.pop();
    temp2.pop();
  }
  return true; // you can change this line
}

#endif
