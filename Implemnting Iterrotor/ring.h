#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;
template<typename T>
class ring{
    private:
        int m_pos;
        int m_size;
        int *m_value;

     public:
       class iterator;

    public:
        ring(int size):m_pos(0),m_size(size),m_value(NULL){
            m_value = new T[size];
        }
    ~ring(){
        delete m_value;
    }
    int size(){
    return m_size;
    }
    int add(T value){
        m_value[m_pos]=value;
        m_pos++;
        if(m_pos == m_size)
        {
            m_pos =0;
        }
    }
    T &get(int pos){
    return m_value[pos];

    }
};
template<typename T>
class ring<T>::iterator{

       public:
            void print(){

          cout << "hello world from itterator"<<endl;
        }

       };

#endif // RING_H_INCLUDED
