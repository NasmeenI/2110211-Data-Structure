#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  CP::priority_queue<T> temp1 = *this;
  // while(temp.size()) {
  //   if(temp.top() == k) return true;
  //   temp.pop();
  // }
  // return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  // CP::priority_queue<T,Comp> temp = *this;
  // while(temp.size()) {
  //   if(temp.top() == k) return floor(log2(temp.size()));
  //   temp.pop();
  // }
  // return -1;
}

#endif

