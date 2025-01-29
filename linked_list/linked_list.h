/**
 * @file list.h
 * @author mWizzard (merlinsuter@outlook.com)
 * @brief definition of the list class
 * @version 0.1
 * @date 2025-01-29
 * 
 */

#ifndef LIST_H
#define LIST_H

class Node
{
    private:
        int data;
        int* next;
        int* previous;  
    public:
        //Constructors
        Node();
        Node(int);

        //Methods
        

};

class linked_list{
    private:
        Node* head;
    public:
        int front();
        int back();
        int push_front(int element);
        int push_back(int element);
        int insert(int position, int element);
        void erease(int position);
        void pop_front();
        void pop_back();
};

#endif
