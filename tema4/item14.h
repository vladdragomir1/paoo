#pragma once
#include <iostream>
using namespace std;

class MutexLock {
public:
    explicit MutexLock(int id) : mutexID(id) {
        cout << "Locking Mutex " << mutexID << "\n";
    }

    ~MutexLock() {
        cout << "Unlocking Mutex " << mutexID << "\n";
    }

    MutexLock(const MutexLock&) = delete;            // Delete Copy Constructor
    MutexLock& operator=(const MutexLock&) = delete; // Delete Assignment Operator

private:
    int mutexID;
};