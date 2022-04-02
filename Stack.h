#ifndef DS_STACK_H
#define DS_STACK_H
class StackAPI{
public:
    virtual void push(int num)=0;
    virtual int pop()=0;
    virtual bool isEmpty()=0;
};
#endif //DS_STACK_H
