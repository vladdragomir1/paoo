#pragma once
#include <iostream>
#include <memory>
#include <string>
using namespace std;

// dummy resource class for demonstration
class Resource {
public:
    Resource() { 
        cout << "Resource acquired.\n"; 
    }
    ~Resource() { 
        cout << "Resource released.\n"; 
    }
    void sayHello() { 
        cout << "Resource is being used.\n"; 
    }
};

// use smart pointer to manage resource
class ResourceManager {
public:
    ResourceManager() : ptr(std::make_unique<Resource>()) {}

    void useResource() {
        ptr->sayHello();
    }
    //no destructor needed, unique_ptr will clean up automatically
private:
    unique_ptr<Resource> ptr;
};