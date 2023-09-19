#ifndef _CP_VECTOR_INCLUDED_
#define _CP_VECTOR_INCLUDED_

#include <iostream>

namespace CP {
  template <typename T>
  class stack {
    protected:
      T *mData;
      size_t mSize;
      size_t mCap;

      void expand(size_t capacity) {
        T *arr = new T[capacity]();
        for(size_t i = 0; i < mSize; i++) {
          arr[i] = mData[i];
        }
        delete[] mData;
        mData = arr;
        mCap = capacity;
      }

      void ensureCapacity(size_t capacity) {
        if(capacity > mCap) {
          size_t s = capacity > 2 * mCap ? capacity : 2 * mCap;
          expand(s);
        }
      }

    public:
      //-------------- constructor & copy operator ----------
      stack() {
        int cap = 1;
        mData = new T[cap]();
        mCap = cap;
        mSize = 0;
      }

      stack(const stack<T>& a) {
        mData = new T[a.capacity()]();
        mCap = a.capacity();
        mSize = a.size();
        for (size_t i = 0;i < a.size();i++) {
          mData[i] = a[i];
        }
      }
      
      stack<T>& operator=(stack<T> &other) {
        using std::swap;
        swap(this->mData, other.data);
        swap(this->mCap, other.mCap);
        swap(this->mSize, other.mSize);
        return *this;
      }

      ~stack() {
        delete [] mData;
      }

      //------------- capacity function -------------------
      bool empty() {
        return mSize == 0;
      }

      size_t size() {
        return mSize;
      }

      //----------------- access -------------
      const T& top() const {
        return mdata[mSize-1];
      }

      //----------------- modifier -------------
      void push(const T &element) {
        ensureCapacity(mSize + 1);
        mData[mSize++] = element;

        // insert(end(), element);
      }
      
      void pop() {
        mSize--;
      }
  };
}

#endif