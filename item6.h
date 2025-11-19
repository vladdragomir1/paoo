#ifndef ITEM6_H
#define ITEM6_H

#include <iostream>

class Item6 {
public:
    Item6() = default;
    ~Item6() = default;

    // Delete copy constructor and copy assignment operator
    Item6(const Item6&) = delete;
    Item6& operator=(const Item6&) = delete;
};

#endif