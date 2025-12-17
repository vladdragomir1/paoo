#include <iostream>
#include "Item13.h"
#include "Item14.h"
using namespace std;

int main() {
    ResourceManager manager; 
    manager.useResource();
    MutexLock lock1(101); 
    //MutexLock lock2 = lock1;
    return 0;
}