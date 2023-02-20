//
// Created by Bogdan1 on 20/02/2023.
//

#ifndef C_DYNAMICARRAY_H
#define C_DYNAMICARRAY_H


class DynamicArray {
private:
    int capacity = 10;
    int length = 0;
    int *array;

public:
    DynamicArray();

    DynamicArray(int size);

    DynamicArray(DynamicArray &array);

    void push_back(int element);

    void resize();

    int size() const;

    void remove(int index);

    void insert(int element, int index);

    int &operator[](int index);

    ~DynamicArray();
};


#endif //C_DYNAMICARRAY_H
