#ifndef LABELEDBUFFER_H
#define LABELEDBUFFER_H

#include "BaseBuffer.h"
#include <string>
#include <iostream>
using namespace std;

class LabeledBuffer : public BaseBuffer {
    
private:
    string label;

public:
    // Constructor
    LabeledBuffer(size_t s, std::string l) : BaseBuffer(s), label(l) {}

    LabeledBuffer(const LabeledBuffer& rhs) 
        : BaseBuffer(rhs), 
          label(rhs.label)
    {}

    // ITEM 10, 11, 12: Assignment Operator
    LabeledBuffer& operator=(const LabeledBuffer& rhs) {
        // Item 11: check self-assignment
        if (this == &rhs) 
            return *this;

        // ITEM 12: Call Base class assignment to copy base parts
        BaseBuffer::operator=(rhs); 

        // copy derived parts
        this->label = rhs.label;

        // Item 10: Return *this
        return *this;
    }

    void printInfo() const {
        cout << label << " | ";
        printBase();
    }
};

#endif