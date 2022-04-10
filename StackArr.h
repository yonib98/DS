#ifndef DS_STACKARR_H
#define DS_STACKARR_H
#include "Stack.h"
#include "exception"
class EmptyStack : public std::exception{};
class StackArr : public StackAPI{
private:
     const static int initial_size=8;
     const static int resize_factor=2;
    int* data;
    int top;
    int capacity;
    void expand();
public:
    StackArr();
    ~StackArr();
    int pop();
    void push(int nun);
    bool isEmpty();
};
typedef StackArr Stack;
#endif //DS_STACKARR_H
