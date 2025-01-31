#include "vector.h"
#include <iostream>

/**
 * @brief Default constructor
 * 
 */
Vector::Vector(){
    arr = nullptr;
    dimension = 0;
    capacity = 0;
}

/**
 * @brief Constuctor w\ size specified
 * 
 * @param size 
 */
Vector::Vector(int size){
    arr = new int[size];
    dimension = size;
    capacity = size;
}

/**
 * @brief Constructor with copy
 * 
 * @param v 
 */
Vector::Vector(Vector& v){
    arr = new int[v.capacity];
    dimension = v.dimension;
    capacity = v.capacity;
    for(int i = 0; i < v.dimension; i++){
        arr[i] = v.arr[i];
    }
}

/**
 * @brief destructor
 * 
 */
void  Vector::clear(){
    delete []arr;
    capacity = 0;
    dimension = 0;
}

/**
 * @brief Increase the size of a vector
 * 
 * @param size 
 */
void Vector::resize(int size){
    if(size > capacity){
        int *temp = new int[size];
        for(int i = 0; i < dimension; i++){
            temp[i] = arr[i];
        }
        delete []arr;
        capacity = size;
        arr = temp;
    }
}

/**
 * @brief places an element at the end of the vector
 * 
 * @param e 
 */
void Vector::push_back(int e){
    if(dimension == capacity){
        resize(2*dimension +1);
    }
    arr[dimension] = e;
    dimension++;
}

/**
 * @brief delete last element of the vector
 * 
 */
void Vector::pop_back(){
    if(dimension > 0){
        dimension--;
    }
}

/**
 * @brief access element at a certain position
 * 
 * @param pos 
 * @return int 
 */
int Vector::at(int pos){
    if(pos >= dimension || pos < 0){
        std::cerr<<"Cant access element at position " << pos
        << ", element out of bound\n";
        return -1;
    }else{
        return arr[pos];
    }
}

/**
 * @brief access to the last element of a vector
 * 
 * @return int 
 */
int Vector::back(){
    if(dimension > 0){
        return arr[size()-1];
    }
}

/**
 * @brief get the current capacity of a vector
 * 
 * @return int 
 */
int Vector::cap(){
    return capacity;
}

/**
 * @brief get the current dimensions of a vector
 * 
 * @return int 
 */
int Vector::size(){
    return dimension;
}