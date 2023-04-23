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
    cout << "Pushed: 5" << endl;
    s.push(6);
    cout << "Pushed: 6" << endl;
    s.push(7);
    cout << "Pushed: 7" << endl;

    cout << "Popped: " << s.pop() << endl;
    cout << "Top element is: " << s.top() << endl;

    s.display();

    cout << "\nThe following are the outputs of Stack implementation using Linked List:" << endl;
    Linked_List_Stack stack;

    stack.pop();
    stack.top();

    stack.push(0);
    cout << "Pushed: 0" << endl;
    stack.push(1);
    cout << "Pushed: 1" << endl;
    stack.push(2);
    cout << "Pushed: 2" << endl;

    cout << "Popped: " << stack.pop() << endl;
    cout << "Top element is: " << stack.top() << endl;

    stack.display();

    return 0;
}
