#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<int, int> m;
    for(int i=0;i<size();i++) m[mData[i]]++;

    std::vector<std::pair<T, size_t>> ans;
    for(int i=0;i<k.size();i++) {
        if(!m.count(k[i])) ans.push_back({k[i], 0});
        else ans.push_back({k[i], m[k[i]]});
    }
    return ans;
}

#endif
