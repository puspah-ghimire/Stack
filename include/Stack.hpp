#ifndef STACK_HPP
#define STACK_HPP
class Stack
{
public:
    Stack() {}
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual bool is_Empty() = 0;
};

#endif