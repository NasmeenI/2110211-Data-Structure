#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> temp;
        for(int i=0;i<s.size();i++) temp.push(s.mData[i]);
        for(int i=0;i<size();i++) temp.push(mData[i]);
        *this = temp;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> temp;
        for(int i=q.size()-1;i>=0;i--) temp.push(q.mData[i]);
        for(int i=0;i<size();i++) temp.push(mData[i]);
        *this = temp;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        for(int i=s.size()-1;i>=0;i--) push(s.mData[i]);
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        for(int i=0;i<q.size();i++) push(q.mData[i]);
    }
}
