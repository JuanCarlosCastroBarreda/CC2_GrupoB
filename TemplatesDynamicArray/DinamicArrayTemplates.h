#ifndef DYNAMICARRAY_H__
#define DYNAMICARRAY_H__

#include <iostream>

template <typename T>
class DynamicArray {
private:
    T* data;
    int size;

public:
    DynamicArray() {
        this->size = 0;
        this->data = new T[0];
    }

    DynamicArray(T arr[], int size) {
        this->size = size;
        this->data = new T[size];
        for (int i = 0; i < size; i++)
            data[i] = arr[i];
    }

    DynamicArray(const DynamicArray& o) {
        this->size = o.size;
        this->data = new T[o.size];
        for (int i = 0; i < size; i++)
            data[i] = o.data[i];
    }

    void insert(T value, int pos) {
        T* tmp = new T[size + 1];
        bool inserted = false;
        for (int i = 0; i < size; i++) {
            if (i == pos) {
                inserted = true;
            }
            if (inserted == false) {
                tmp[i] = data[i];
            } else {
                tmp[i + 1] = data[i];
            }
        }
        tmp[pos] = value;
        delete[] data;
        size += 1;
        data = tmp;
    }

    void remove(int pos) {
        T* tmp = new T[size - 1];
        bool removed = false;
        for (int i = 0; i < size - 1; i++) {
            if (i == pos) {
                removed = true;
            }
            if (removed == false) {
                tmp[i] = data[i];
            } else {
                tmp[i] = data[i + 1];
            }
        }
        delete[] data;
        size -= 1;
        data = tmp;
    }

    void push_back(T value) {
        T* tmp = new T[size + 1];
        for (int i = 0; i < size; i++)
            tmp[i] = data[i];
        tmp[size] = value;
        delete[] data;
        size += 1;
        data = tmp;
    }

    void print() const {
        for (int i = 0; i < size; i++)
            std::cout << data[i] << " ";
        std::cout << std::endl;
    }

    int getSize() const {
        return size;
    }

    ~DynamicArray() {
        delete[] data;
    }
};

#endif