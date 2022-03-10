#include <iostream>
using namespace std;
class stack
{
private:
    int top;
    int total; // its created for checking stackoverflow
    int array[1000];

public:
    stack(int n)
    {
        total = n;
        top = -1;
        for (int i = 0; i < n; i++)
        {
            array[i] = 0;
        }
    }
    bool isfull()
    {
        if (top == total)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int a)
    {
        if (isfull())
        {
            cout << "stack is overflow" << endl;
        }
        else
        {
            top++;
            array[top] = a;
        }
    }
    int pop()
    {
        if (isempty())
        {
            cout << "stack is underflow" << endl;
            return (0);
        }
        else
        {
            int temp = array[top];
            top--;
            return temp;
        }
    }
    // acces the item at the nth position
    void peek(int n)
    {
        cout << "the peeked element is :";
        cout << array[n];
    }
    void change(int pos, int value)
    {
        array[pos] = value;
        cout << "position was changed";
    }
    void display()
    {
        if (isempty())
        {
            cout << "stack is underflow:";
        }
        else
        {
            cout << "all values in the stack are:";
            for (int j = top; j >= 0; j--)
            {
                cout << endl
                     << array[j];
            }
        }
    }
};
int main()
{
    int n, b, c;
    cout << "enter the array size:";
    cin >> n;
    stack sanmay(--n);
    for (;;)
    {
        cout << endl
             << "1 to push, 2 to pop , 3 to peek , 4 to change ,5 to display:,6 to exit";
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "enter the ammount you want to insert in the stack";
            cin >> b;
            sanmay.push(b);
            break;
        case 2:
            sanmay.pop();
            break;
        case 3:
            if (sanmay.isempty())
            {
                cout << "stack is underflow:";
            }
            else
            {
                cout << endl
                     << "enter the element position you want to peek:";
                cin >> b;
                sanmay.peek(--b);
            }
            break;
        case 4:
            cout << "enter the position you change:";
            cin >> b;
            cout << "enter the new value:";
            cin >> c;
            sanmay.change(--b, c);
        case 5:
            sanmay.display();
            break;
        case 6:
            return (0);

        default:
            cout << "please enter the correct input:" << endl;
            break;
        }
    }
}