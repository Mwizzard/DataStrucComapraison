#include "stack.h"
#include <iostream>
#include <cassert>

/**
 * @brief Construct a new Stack:: Stack object
 * 
 * @param s 
 */
Stack::Stack()
{
    current_size = 0;
};

/**
 * @brief returns current size of the stack
 * 
 * @return int 
 */
int Stack::size(){
    return current_size;
};


/**
 * @brief returns the max size of the stack
 * 
 * @return int 
 */
int Stack::max_size(){
    return MAX_SIZE;
};


/**
 * @brief places an element on top of the stack;
 * 
 * @param element 
 */
void Stack::push(int element){
    if(current_size == MAX_SIZE){
        std::cout << "Stack has reached max capacity, cant push any elements anymore\n";
    }else{
        arr[current_size] = element;
        current_size++;
    }
    
};


/**
 * @brief removes the element on top of the stack
 * 
 */
void Stack::pop(){
    if(current_size == 0){
        std::cout << "Stack is empty, no elements to remove\n";
    }else{
        arr[current_size -1] = 0;
        current_size--;
    }
}


/**
 * @brief returns the element on top of the stack
 * 
 * @return int 
 */
int Stack::front() {
    if (current_size == 0) {
        std::cout << "Stack is empty, can't access first element.\n";
        return -1;
    }
    return arr[current_size - 1];
}


/**
 * @brief returns the element at the bottom of the stack
 * 
 * @return int 
 */
int Stack::bottom(){
    return arr[0];
}


/**
 * @brief If the stack is empty, returns true
 * 
 * @return true 
 * @return false 
 */
bool Stack::is_empty(){
    if(current_size == 0){
        return true;
    }
    return false;
}