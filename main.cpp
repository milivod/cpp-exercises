#include "Vector.h"
#include <iostream>


int main() {
    Vector a(2,5);
    Vector* b = new Vector(5,5);
    
    a.add(b);
    a.output();

    Vector* pointer = &a; 
    
    b->add(pointer);
    
    b->output();
    



    delete b;

    return 0;
}