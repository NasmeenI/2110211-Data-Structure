#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    CP::stack<T> temp;
    for(int i=0;i<size();i++) {
        temp.push(mData[i]);
        if(size()-i-1 >= a and size()-i-1 <= b) temp.push(mData[i]);
    }
    *this = temp;
}

#endif