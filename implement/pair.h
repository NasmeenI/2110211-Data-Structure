#ifndef _CP_PATR_INCLUDED_
#define _CP_PATR_INCLUDED_

namespace CP {
  template <typename T1, typename T2>
  class pair {
    public:
      T1 first;
      T2 second;

      // default constructor, using list initialize
      pair() : first(), second() {}

      // custom constructor, using list initialize
      pair(const T1 &first, const T2 &second) : first(first), second(second) {}

      // equality operator
      bool operator==(const pair<T1, T2> &other) const {
        return this->first == other.first && this->second == other.second;
      }

      // condarison operator
      bool operator<(const pair<T1, T2> &other) const {
        return this->first < other.first || (this->first == other.first && this->second < other.second);
      }
  };
}

#endif