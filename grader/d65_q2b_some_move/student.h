#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

#define x 1875

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  int dFirst = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
  int dSecond = (dFirst > 0 ? index - aux[dFirst-1] : index);

  if(dFirst == mData.size()) mData.push_back(value);
  else mData[dFirst].insert(mData[dFirst].begin() + dSecond, value.begin(), value.end());

  if(mData[dFirst].size() > x) {
		mData.insert(mData.begin()+dFirst+1, std::vector<T>(mData[dFirst].begin() + x, mData[dFirst].end()));
		while(mData[dFirst].size() > x) mData[dFirst].pop_back();
	}
  
  aux.resize(mData.size());
  for(int i=dFirst; i<mData.size(); i++) aux[i] = (i ? aux[i-1] : 0) + mData[i].size();
  mSize = mCap = aux.back();
}

#endif
