#ifndef STACK_H
#define STACK_H

#include "StackNode.h"
#include <iostream>
#include <cstdlib>

class Stack
{
public:
  Stack();
  virtual ~Stack();
  void push(int item);
  void pop();
  void pairMaping(int A[],int n);
  int top() const;
  int getMinimum() const;

  bool isEmpty() const;
  int getSize() const;

private:
  StackNode *head;
  int stackSize;
};

#endif // STACK_H
