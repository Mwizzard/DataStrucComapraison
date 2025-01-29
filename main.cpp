/**
 * \file main.cpp
 * \author mWizzard
 * 
 * \brief Main file where the data structures are compared and used
 * 
 * \date 2025-01-29
 */

#include <iostream>
#include "stack.h"
int main(){

    //Stack tests
    Stack stack;
    stack.push(1);
    
    std::cout << "Top element : " << stack.front();
    
    if(stack.is_empty()){
        std::cout << "\nStack is empty\n";
    }

    stack.pop();

    std::cout << "\nTop element : " << stack.front();

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "\nTop element : " << stack.front();
    std::cout << "\nbottom element : " << stack.bottom();
    std::cout << "\nstack size : " << stack.size();

    return 0;
}