#include "QueueList.h"
QueueList::QueueList(): head(nullptr),rear(nullptr){}

bool QueueList::isEmpty() {
    return head== nullptr;
}
int QueueList::top(){
    if(isEmpty()){
        throw new std::exception();
    }
        return head->val;
}

int QueueList::dequeue() {
    int value = top();
    head=head->next;
    return value;
}
void QueueList::enqueue(int num) {
    QueueList::QueueElement* to_insert  = new QueueList::QueueElement();
    to_insert->val=num;
    if(isEmpty()){
        head=to_insert;
        rear=to_insert;
    }else{
        rear->next=to_insert;
        rear=to_insert;
    }
}
