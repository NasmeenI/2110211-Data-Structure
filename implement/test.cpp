#include <iostream>
#include "pair.h"

int main() {
  CP::pair<int,int> x;

  x.first = 1;
  x.second = 2;
  std::cout << x.first << ' ' << x.second;
}