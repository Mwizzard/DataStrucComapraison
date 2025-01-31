/**
 * @file stack.h
 * @author mWizzard (merlinsuter@outlook.com)
 * @brief definition of the stack class
 * @version 0.1
 * @date 2025-01-29
 * 
 */

#ifndef STACK_H
#define STACK_H

class Stack
{
    private:
        int current_size;
        int top;
        const static int MAX_SIZE = 100;    //Max size set to 100 by default
        int arr[MAX_SIZE];   
    public:
        //Constructor
        Stack();

        //Methods
        int size();
        int max_size();
        void push(int);
        void pop();
        int front();
        int bottom();
        bool is_empty();

};

#endif
