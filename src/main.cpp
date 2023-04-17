#include "Array_Stack.hpp"
#include "Linked_List_Stack.hpp"
#include <iostream>
using namespace std;
int main()
{
    Array_Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    cout << s.pop() << endl;
    s.display();

    Linked_List_Stack stack;
    cout << stack.pop() << endl;
}
