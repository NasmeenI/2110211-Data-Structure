#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T temp = mData[(int(mFront) + int(pos)) % int(mCap)];
    for(int i=pos;i<size()-1;i++) {
        mData[(int(mFront) + i) % int(mCap)] = mData[(int(mFront) + i + 1) % int(mCap)];
    }
    mData[(int(mFront) + int(mCap) - 1) % int(mCap)] = temp;
    mFront = (int(mFront) + int(mCap) - 1) % int(mCap);
}

#endif
