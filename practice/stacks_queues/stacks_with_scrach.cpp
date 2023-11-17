#include<bits/stdc++.h>

class Stack
{
private:
    std::vector<int> elements;

public:
    // Function to push an element onto the stack
    void push(int item)
    {
        elements.push_back(item);
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (!elements.empty())
        {
            elements.pop_back();
        }
        else
        {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Function to display the top element of the stack
    void top()
    {
        if (!elements.empty())
        {
            std::cout << "Top element: " << elements.back() << std::endl;
        }
        else
        {
            std::cout << "Stack is empty." << std::endl;
        }
    }

    // Function to display all elements of the stack
    void display()
    {
        std::cout << "Stack: ";
        for (int i : elements)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return elements.empty();
    }
};

int main()
{
    // Create a stack object
    Stack myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the stack
    myStack.display();

    // Display the top element
    myStack.top();

    // Pop an element
    myStack.pop();

    // Display the stack after popping
    myStack.display();

    return 0;
}
