#ifndef LINKED_LIST_STACK_HPP
#define LINKED_LIST_STACK_HPP
#include "Stack.hpp"
#include "Linked_List.hpp"

class Linked_List_Stack : public Stack
{
private:
    Linked_List list;

public:
    Linked_List_Stack(){};
    ~Linked_List_Stack(){};

    void push(int data);
    int pop();
    int top();
    bool is_Empty();
};

#endif