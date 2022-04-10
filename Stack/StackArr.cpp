#include "StackArr.h"
#include "exception"
StackArr::StackArr(): top(0),capacity(initial_size) {
    data = new int[initial_size];
}
StackArr::~StackArr() {
    delete [] data;
}
bool StackArr::isEmpty() {
    return top==0;
}
void StackArr::push(int num) {
    data[top++]=num;
    if(top==capacity){
        expand();
    }
}
int StackArr::pop(){
    if(isEmpty()){
        throw EmptyStack();
    }
    return data[--top];
}
void StackArr::expand(){
    int *new_data = new int[capacity*initial_size];
    for(int i=0;i<top;i++) {
        new_data[i] = data[i];
    }
    capacity*=initial_size;
    free(data);
    data=new_data;
}