//
// Created by Bogdan1 on 20/02/2023.
//

#include "Queue.h"
#include <iostream>

Queue::Queue() {
    this->size = 10;
    this->front = -1;
    this->rear = -1;
}

bool Queue::isFull() {
    if (front == 0 && rear == this->size)
        return true;
    return false;
}

bool Queue::isEmpty() {
    return front == -1;
}

void Queue::enqueue(int element) {
    if (front == -1)
        front = 0;
    rear++;
    elements[rear] = element;
}

int Queue::dequeue() {
    //TODO:Add when its empty
    int element = elements[front];
    if (front >= rear) {
        front = rear = -1;
    } else
        front++;
    return element;
}

void Queue::showQueue() {
    for (int i = front; i <= rear; i++)
        std::cout << elements[i] << " ";

}

