#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *arr;
    int element;

public:
    Stack()
    {
        this->size = 5;
        this->top = -1;
        this->arr = new int[this->size];
    }
    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        this->arr = new int[this->size];
    }

    void push()
    {
        if (isFull())
        {
            cout << "Overflow!!" << endl;
        }
        else
        {
            cout << "Enter the element to be added onto the stack: " << endl;
            cin >> element;
            top += 1;
            this->arr[top] = element;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Underflow!!" << endl;
        }
        else
        {
            cout << "Popped element:" << this->arr[top] << endl;
            this->arr[top] = 0;
            top -= 1;
        }
    }

    void peek()
    {
        cout << "element at top : " << this->arr[top] << endl;
    }

    bool isEmpty()
    {
        if (this->top == -1)
            return true;
        else
            return false; 
    }

    bool isFull()
    {
        if (top == this->size - 1)
            return true;
        else
            return false;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "element at " << i << " : " << arr[i] << endl;
        }
    }
    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(5);
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.print();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.print();
    s.peek();
    return 0;
}