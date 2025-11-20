#include "item4.h"
#include "item5.h"
#include "item6.h"

int main() {
    // Demonstrate item4
    Item4 obj4("Andrei Pop", 23);
    obj4.display();

    // Demonstrate item5
    //Item5 obj5_1;
    //Item5 obj5_2 = obj5_1; // Copy constructor
    //obj5_2 = obj5_1;       // Copy assignment operator

    // Demonstrate item6
    Item6 obj6;
    //Item6 obj6_copy = obj6; // Error: Copy constructor is deleted
    //obj6_copy = obj6;       // Error: Copy assignment operator is deleted

    return 0;
}