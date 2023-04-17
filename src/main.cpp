#include "Array_Stack.hpp"
#include "Linked_List_Stack.hpp"
#include <iostream>
using namespace std;
int main()
{
    cout << "The following are the outputs of Stack implementation using Array:" << endl;
    Array_Stack s;
    s.pop();
    s.top();
    s.push(5);
    s.push(6);
    s.push(7);
    cout << s.pop() << endl;
    cout << s.top() << endl;
    s.display();

    cout << "\nThe following are the outputs of Stack implementation using Linked List:" << endl;
    Linked_List_Stack stack;
    stack.pop();
    stack.top();
    stack.push(0);
    stack.push(1);
    stack.push(2);
    cout << stack.pop() << endl;
    cout << stack.top() << endl;
}
