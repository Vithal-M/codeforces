#include <bits/stdc++.h>

class Queue
{
private:
    std::queue<int> elements;

public:
    // Function to enqueue (push) an element into the queue
    void enqueue(int item)
    {
        elements.push(item);
    }

    // Function to dequeue (pop) an element from the queue
    void dequeue()
    {
        if (!elements.empty())
        {
            elements.pop();
        }
        else
        {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        }
    }

    // Function to display the front element of the queue
    void front()
    {
        if (!elements.empty())
        {
            std::cout << "Front element: " << elements.front() << std::endl;
        }
        else
        {
            std::cout << "Queue is empty." << std::endl;
        }
    }

    // Function to display all elements of the queue
    void display()
    {
        std::cout << "Queue: ";
        std::queue<int> temp = elements;

        while (!temp.empty())
        {
            std::cout << temp.front() << " ";
            temp.pop();
        }

        std::cout << std::endl;
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return elements.empty();
    }
};

int main()
{
    // Create a queue object
    Queue myQueue;

    // Enqueue elements into the queue
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Display the queue
    myQueue.display();

    // Display the front element
    myQueue.front();

    // Dequeue an element
    myQueue.dequeue();

    // Display the queue after dequeue
    myQueue.display();

    return 0;
}
