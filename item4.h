#ifndef ITEM4_H
#define ITEM4_H

#include <iostream>
#include <string>

class Item4 {
private:
    std::string name;
    int age;

public:
    // Constructor with member initializer list
    Item4(const std::string& name, int age) : name(name), age(age) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

#endif 