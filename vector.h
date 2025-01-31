/**
 * @file vector.h
 * @author mWizzard (merlinsuter@outlook.com)
 * @brief definition of the vector class
 * @version 0.1
 * @date 2025-01-30
 * 
 */

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
    private:
        int *arr;
        int  dimension;    
        int  capacity;   
    public:
        //Constructors
        Vector();               //Default
        Vector(int size);       //Specified size
        Vector(Vector& v);      //Copy

        //Destructor
        void clear();

        //Methods
        void resize(int);
        void push_back(int);
        void pop_back();
        int  at(int);
        int  back();
        int  cap();
        int  size();

};

#endif
