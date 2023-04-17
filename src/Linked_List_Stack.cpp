#include "Linked_List_Stack.hpp"
#include <iostream>
using namespace std;

bool Linked_List_Stack ::is_Empty()
{
    return (list.isEmpty()); // If linked list is empty, Stack is empty.
}

void Linked_List_Stack ::push(int data)
{
    list.addToHead(data);
}

int Linked_List_Stack ::pop()
{
    return (list.removeFromHead());
}

int Linked_List_Stack ::top()
{
    return (0); // Returns the info of HEAD.
}
