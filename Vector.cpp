#include "Vector.h"
#include <iostream>

Vector::Vector(int x, int y) 
:m_x(x), m_y(y){


}

void Vector::output() const {
    printf("Vector : (%d,%d) \n",m_x,m_y);
}
void Vector::add(const Vector* other) {
    m_x += other->m_x;
    m_y += (*other).m_y;
}

