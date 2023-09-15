#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

void cal(stack<int> &num, int op) {
  int b = num.top();
  num.pop();
  int a = num.top();
  num.pop();
  
  int c;
  if(op == 0) {
    c = a + b;
  } else if(op == 1) {
    c = a - b;
  } else if(op == 2) {
    c = a * b;
  } else {
    c = a / b;
  }
  num.push(c);
}

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> num;
  for(auto e:v) {
    if(e.first == 0) cal(num, e.second);
    else num.push(e.second);
  }

  return num.top();
}

#endif
