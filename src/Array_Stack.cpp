#include "Array_Stack.hpp"
#include <iostream>
using namespace std;

bool Array_Stack::is_Empty()
{
    if (TOP == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Array_Stack::is_Full()
{
    if (TOP == MAX_STACK_SIZE - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Array_Stack::push(int data)
{
    if (is_Full())
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        TOP++;
        A_Stack[TOP] = data;
    }
}

int Array_Stack::pop()
{
    if (is_Empty())
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        int temp = A_Stack[TOP];
        TOP--;
        return temp;
    }
}

int Array_Stack::top()
{
    if (is_Empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        return (A_Stack[TOP]);
    }
}

void Array_Stack::display()
{
    if (is_Empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        int i = TOP;
        cout << "The elements are: " << endl;
        for (i; i >= 0; i--)
        {
            cout << A_Stack[i] << " ";
        }
        cout << endl;
    }
}
