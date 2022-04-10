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
    int top() override;
     void enqueue(int num) override;
    int dequeue() override ;
    bool isEmpty();
};
typedef QueueList Queue;
#endif //DS_QUEUELIST_H
