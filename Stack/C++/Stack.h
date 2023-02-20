
#ifndef C_STACK_H
#define C_STACK_H


class Stack {
private:
    int *stack{};
    int top;
    int capacity;
public:
    Stack();

    void push(int element);

    void pop();

    int size();

    int peek();

    bool isEmpty();

    bool isFull();
};


#endif //C_STACK_H
