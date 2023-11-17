#include <iostream>
#include <stack>

using namespace std;

int findMiddle(stack<int> &stk){
    stack<int> tempStack;
    int size = stk.size();
    int middle = size / 2;

    for (int i = 0; i < middle; ++i)
    {
        tempStack.push(stk.top());
        stk.pop();
    }

    int middleElement = stk.top();

    while (!tempStack.empty())
    {
        stk.push(tempStack.top());
        tempStack.pop();
    }

    return middleElement;
}

int main()
{
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    int middleElement = findMiddle(myStack);

    cout << "Middle element: " << middleElement << endl;

    return 0;
}
