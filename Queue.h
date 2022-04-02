#ifndef DS_QUEUE_H
#define DS_QUEUE_H
class QueueAPI{
        virtual int top()=0;
        virtual void enqueue(int num)=0;
        virtual int dequeue()=0;
        bool isEmpty();
};
#endif //DS_QUEUE_H
