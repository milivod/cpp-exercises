#ifndef VECTOR_H
#define VECTOR_H



class Vector {

    protected:
        int m_x;
        int m_y;

    public: 
        Vector(int x, int y);
        void output()const;
        
        void add(const Vector* other);
      

};
#endif
