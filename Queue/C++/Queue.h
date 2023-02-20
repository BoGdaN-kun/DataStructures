

#ifndef C_QUEUE_H
#define C_QUEUE_H


class Queue {
private:
    int front;
    int rear;
    int size;
    int elements[15];
public:
    Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int element);
    int dequeue();
    void showQueue();
};


#endif //C_QUEUE_H
