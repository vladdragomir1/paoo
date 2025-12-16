#ifndef BASEBUFFER_H
#define BASEBUFFER_H

#include <iostream>
#include <cstring>
using namespace std;

class BaseBuffer {
protected:
    size_t size;
    int* data;

public:
    // Constructor
    BaseBuffer(size_t s) : size(s), data(new int[s]) {
        for (size_t i = 0; i < size; i++) 
            data[i] = 0;
    }

    // Destructor
    virtual ~BaseBuffer() {
        delete[] data;
    }

    // Copy Constructor
    BaseBuffer(const BaseBuffer& rhs) : size(rhs.size), data(new int[rhs.size]) {
        memcpy(data, rhs.data, size * sizeof(int));
    }

    // ITEM 10 and 11: Assignment Operator
    BaseBuffer& operator=(const BaseBuffer& rhs) {
        // ITEM 11: Check for self-assignment
        if (this == &rhs) {
            return *this; 
        }

        delete[] data; 
        size = rhs.size;
        data = new int[size];
        memcpy(data, rhs.data, size * sizeof(int));

        // ITEM 10: Return reference to *this
        return *this;
    }

    void setData(size_t index, int value) {
        if (index < size)
            data[index] = value;
    }

    void printBase() const {
        for (size_t i = 0; i < size; ++i) 
            cout << data[i] << " ";
        cout << "\n";
    }
};

#endif