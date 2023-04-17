#ifndef ARRAY_STACK_HPP
#define ARRAY_STACK_HPP
#define MAX_STACK_SIZE 10
#include "Stack.hpp"

class Array_Stack : public Stack
{
private:
    int A_Stack[MAX_STACK_SIZE];
    int TOP = -1;

public:
    void push(int data);
    int pop();
    int top();
    bool is_Empty();
    bool is_Full();
    void display();
};

#endif