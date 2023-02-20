//
// Created by Bogdan1 on 20/02/2023.
//

#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    this->array = new int[this->capacity];
}


DynamicArray::DynamicArray(DynamicArray &array) {

}


DynamicArray::DynamicArray(int size) {
    this->array = new int[size];
    this->capacity = size;
}

void DynamicArray::push_back(int element) {
    if (capacity == length)
        resize();
    this->array[length] = element;
    this->length++;
}

int DynamicArray::size() const {
    return this->length;
}

void DynamicArray::resize() {
    int *newArray = new int[this->capacity * 2];
    this->capacity = this->capacity * 2;
    for (int i = 0; i < this->length; ++i)
        newArray[i] = this->array[i];
    delete[] this->array;
    this->array = newArray;
}

void DynamicArray::remove(int index) {
    for (int i = index; i < this->length; ++i)
        this->array[i] = this->array[i + 1];
    this->length--;

}

void DynamicArray::insert(int element, int index) {
    if (this->capacity == this->length)
        resize();
    for (int i = this->length; i >= index; i--)
        this->array[i + 1] = this->array[i];
    this->array[index] = element;
    this->length++;
}

int &DynamicArray::operator[](int index) {
    //To do: add index out of range
    return *(array + index);
}

DynamicArray::~DynamicArray() {
    delete[] array;
}
