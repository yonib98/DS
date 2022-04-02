#ifndef DS_QUEUELIST_H
#define DS_QUEUELIST_H
#include "Queue.h"
#include "exception"
class QueueList : public QueueAPI{
private:
    class QueueElement{
        int val;
        QueueElement* next;
        friend class QueueList;
    };
    QueueElement* head;
    QueueElement* rear;
public:
    QueueList();
    ~QueueList();
    int top();
    void enqueue(int num);
    int dequeue();
    bool isEmpty();
};
typedef QueueList Queue;
#endif //DS_QUEUELIST_H
