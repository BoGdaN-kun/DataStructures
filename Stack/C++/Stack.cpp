#include "Stack.h"

Stack::Stack() {
    capacity = 10;
    stack = new int[capacity];
    top = -1;
}

void Stack::push(int element) {
    top++;
    stack[top] = element;
}

void Stack::pop() {
    top--;
}

bool Stack::isEmpty() {
    if (this->top == -1)
        return true;
    return false;
}

bool Stack::isFull() {
    if (top == capacity)
        return true;
    return false;

}

int Stack::size() {
    return top + 1;
}

int Stack::peek() {
    return stack[top];
}





