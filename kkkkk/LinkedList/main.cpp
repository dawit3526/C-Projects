#include "stack.h"
#include <iostream>
#include <map>
#include <unordered_map>
typedef std:: unordered_multimap<int,int> mymap;
Stack::Stack()
{
  head = nullptr;
  stackSize = 0;
}

Stack::~Stack()
{
  StackNode *discard;
  while(head != nullptr)
  {
    discard = head;
    head = head->next;
    delete discard;
  }
}



void Stack::push(int item)
{
  if(isEmpty())
  {
    head = new StackNode(item, nullptr);
    head->minimum = head;
  }
  else if(item <= head->minimum->data)
  {
    head = new StackNode(item, head);
    head->minimum = head;
  }
  else
  {
    head = new StackNode(item, head);
    head->minimum = head->next->minimum;
  }

  stackSize++;
}

void Stack::pop()
{
  if(stackSize == 0 || head == nullptr)
    return;

  StackNode *discard = head;
  head = head->next;
  delete discard;
  stackSize--;
}

int Stack::top() const
{
  //Or throw an exception
  if(stackSize == 0 || head == nullptr)
  {
    std::cout << "Stack is empty.\n";
    exit(1);
  }
  return head->data;
}

void Stack::pairMaping(int A[],int n){


mymap map;
for(int i=0;i<=n-1;i++){

  map.insert(mymap::value_type(A[i], 1));

}
for(int i=0;i<=n-1;i++){
if(map.count(A[i]) %2 != 0){
std::cout << A[i];

}

}


}

int Stack::getMinimum() const
{
  //Or throw an exception
  if(stackSize == 0 || head == nullptr)
  {
    std::cout << "Stack is empty.\n";
    exit(1);
  }
  return (head->minimum->data);
}

bool Stack::isEmpty() const
{
  return (stackSize == 0 || head == nullptr);
}

int Stack::getSize() const
{
  return stackSize;
}

int main(){
int A []= {9,3,9,3,9,7,9};
Stack st;
st.push(10);
st.pairMaping(A,7);

return 0;
}
