#include <iostream>
using namespace std;
#include "LabeledBuffer.h"

int main() {

    LabeledBuffer obj1(3, "Object 1");
    obj1.setData(0, 10);
    obj1.setData(1, 20);

    LabeledBuffer obj2(3, "Object 2");
    obj2.setData(0, 99);

    obj1.printInfo();
    obj2.printInfo();

    cout << "\ntesting assignments - item 10 and 12\n";
    LabeledBuffer obj3(3, "Object 3");
    obj3 = obj1 = obj2; 

    cout << "obj1 should now look like obj2:\n";
    obj1.printInfo();
    
    cout << "\ntesting self-assignment - item11\n";
    obj1 = obj1;
    cout << "obj1 should be unchanged:\n";
    obj1.printInfo();

    return 0;
}