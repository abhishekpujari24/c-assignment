#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int size;

    public:

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    bool isempty()
    {
        return top == -1;
    }

    bool isfull()
    {
        return top == size;
    }

    void push(int value)
    {
        if (isfull())
        {
            cout << "stack is full" << endl;
        }
        else
        {
            arr[++top]= value;
        }
    }

    void pop()
    {
        if (isempty())
        {
            cout << "canot pop element";
        }
        else
        {
            arr[top] = 0;
            arr[top--];
        }
    }

    int peek()
    {
        int val;
        if (isempty())
        {
            cout << "STACK IS EMPTY" << endl;
        }
        else

        val = arr[top];
        return val;
    }
    void printarr()
    {
        if (isempty())
        {
            cout << "stack is empty";
        }
        else
        {
            cout << "stack elements is " << endl;
            for (int i = 0; i < top; i++)
                cout << arr[i] << endl;
        }
    }
};



int main()
{
    int choice,size,value;
    cout<<"enter size of stack"<<endl;
    cin>>size;
    Stack s1(size);

    do
    {
        cout << "\nStack Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Print" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: cout<<"enter vale to push";
            cin>>value;
            s1.push(value);
            break;
        case 2: cout<<"pop value";
            s1.pop();
            break;
        case 3:cout<<"peek value";
            s1.peek();
                break;
        case 4:
            s1.printarr();
            break;
        case 0:
        cout<<"thanks";
        break;
        
        default:cout<<"invalid choice"<<endl;
            break;
        }


    } while (choice!=0);

    return 0;
    
}