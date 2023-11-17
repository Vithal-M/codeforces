#include <bits/stdc++.h>

class TwoStacks
{
private:
    int *array; // Dynamic array to store elements
    int size;   // Total size of the array
    int top1;   // Top of the first stack
    int top2;   // Top of the second stack

public:
    // Constructor to initialize the array and tops
    TwoStacks(int arraySize)
    {
        size = arraySize;
        array = new int[size];
        top1 = -1;
        top2 = size;
    }

    // Destructor to free the dynamically allocated memory
    ~TwoStacks()
    {
        delete[] array;
    }

    // Function to push an element onto the first stack
    void push1(int item)
    {
        if (top1 < top2 - 1)
        {
            array[++top1] = item;
        }
        else
        {
            std::cout << "Stack 1 overflow. Cannot push." << std::endl;
        }
    }

    // Function to push an element onto the second stack
    void push2(int item)
    {
        if (top1 < top2 - 1)
        {
            array[--top2] = item;
        }
        else
        {
            std::cout << "Stack 2 overflow. Cannot push." << std::endl;
        }
    }

    // Function to pop an element from the first stack
    void pop1()
    {
        if (top1 >= 0)
        {
            --top1;
        }
        else
        {
            std::cout << "Stack 1 is empty. Cannot pop." << std::endl;
        }
    }

    // Function to pop an element from the second stack
    void pop2()
    {
        if (top2 < size)
        {
            ++top2;
        }
        else
        {
            std::cout << "Stack 2 is empty. Cannot pop." << std::endl;
        }
    }

    // Function to display elements of the first stack
    void display1()
    {
        std::cout << "Stack 1: ";
        for (int i = 0; i <= top1; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

    // Function to display elements of the second stack
    void display2()
    {
        std::cout << "Stack 2: ";
        for (int i = size - 1; i >= top2; --i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    // Create a TwoStacks object with an array of size 10
    TwoStacks twoStacks(10);

    // Push elements onto the stacks
    twoStacks.push1(1);
    twoStacks.push1(2);
    twoStacks.push2(10);
    twoStacks.push2(9);

    // Display the stacks
    twoStacks.display1();
    twoStacks.display2();

    // Pop elements from the stacks
    twoStacks.pop1();
    twoStacks.pop2();

    // Display the stacks after popping
    twoStacks.display1();
    twoStacks.display2();

    return 0;
}
