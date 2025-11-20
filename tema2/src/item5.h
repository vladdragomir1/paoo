#ifndef ITEM5_H
#define ITEM5_H

#include <iostream>

class Item5 {
public:
    Item5() { std::cout << "Default constructor called\n"; }
    ~Item5() { std::cout << "Destructor called\n"; }
    Item5(const Item5&) { std::cout << "Copy constructor called\n"; }
    Item5& operator=(const Item5&) {
        std::cout << "Copy assignment operator called\n";
        return *this;
    }
};

#endif