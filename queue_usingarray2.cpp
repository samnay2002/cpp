// C++ program to implement a queue using an array
#include <iostream>
using namespace std;

struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    ~Queue() { delete[] queue; }

    // function to insert an element
    // at the rear of the queue
    int queueEnqueue(int data)
    {
        // check queue is full or not
        if (capacity == rear)
        {
            cout << endl
                 << "Queue is full" << endl;
            return 0;
        }

        // insert element at the rear
        else
        {
            queue[rear] = data;
            rear++;
        }
        return 0;
    }

    // function to delete an element
    // from the front of the queue
    void queueDequeue()
    {
        // if queue is empty
        if (front == rear)
        {
            cout << endl
                 << "Queue is empty" << endl;
            return;
        }

        // shift all the elements from index 2 till rear
        // to the left by one
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }

            // decrement rear
            rear--;
        }
        return;
    }

    // print queue elements
    void queueDisplay()
    {
        int i;
        if (front == rear)
        {
            cout << endl
                 << "Queue is Empty" << endl;
            return;
        }

        // traverse front to rear and print elements
        for (i = front; i < rear; i++)
        {
            cout << queue[i] << "<--";
        }
        cout << endl;
        return;
    }

    // print front of queue
    void queueFront()
    {
        if (front == rear)
        {
            cout << "Queue is Empty";
            return;
        }
        cout << "Front Element is :" << queue[front]<<endl;
        return;
    }
};

// Driver code
int main(void)
{
    int n, a, c;
    cout << "enter the total size of array:";
    cin >> n;
    // Create a queue of capacity n
    Queue q(n);

    // print Queue elements
    q.queueDisplay();
    for (;;)
    {
        cout << "enter 1 to insert in queue, 2 to delete , 3 to peek , 4 to dosplay:";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "enter the value you want to insert:";
            // inserting elements in the queue
            for (int i = 0; i < n; i++)
            {
                cin >> a;
                q.queueEnqueue(a);
            }
            break;
        case 2:
            q.queueDequeue();
            break;
        case 3:
            q.queueFront();
            break;
        case 4:
            q.queueDisplay();
            break;
        default:
            cout << "invalid input please enter the valid input:" << endl;
            break;
        }
    }

    return 0;
}
