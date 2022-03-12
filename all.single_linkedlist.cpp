#include <iostream>
#include <stdio.h>
using namespace std;

// Creating Node Structure
struct Node
{
    int data;
    struct Node *next;
};
// creating head pointer and equating to NULL
Node *head = NULL;

// Function to insert at the beginning of linked list and the push function of an stack||
void insertbeg()
{
    int x, n;
    cout << "enter the total numbers you want to insert" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "enter the numbers:" << endl;
        cin >> x;
        Node *ptr = new Node();
        ptr->data = x;
        ptr->next = head;
        head = ptr;
        x = 0;
    }
}
// function to insert at the end of the linkedlist
void insertend(int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {

        cout << endl
             << "enter the number:" << endl;
        cin >> x;
        Node *temp = new Node();
        temp->data = x;
        temp->next = NULL;
        x = 0;
        Node *temp1 = new Node();
        temp1 = head;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
    }
}
// // function to print the linked list
int print()
{
    Node *temp = new Node();
    temp = head;
    cout << endl
         << endl
         << "new linked list is--" << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return (0);
}
// // insert in the nth position
void insertnth(int a, int b)
{
    Node *temp = new Node();
    Node *temp1 = new Node();
    temp1 = head;
    temp->data = b;
    temp->next = NULL;
    if (head != NULL && a == 1)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for (int i = 1; i < a - 1; i++)
        {
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
    }
}
// function for deleting a node calling by position
void deletenode(int a)
{
    Node *temp = new Node();
    Node *temp1 = new Node();
    temp = head;
    if (a == 1)
    {
        head = temp->next;
    }
    else
    {
        for (int i = 1; i < a - 1; i++)
        {
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = temp1->next;
    }
}
// function for revese the linkedlist
int reverse()
{
    Node *New = new Node();
    Node *temp = new Node();
    Node *count = new Node();
    count = head;
    New = NULL;
    while (count != NULL)
    {
        temp = count->next;
        count->next = New;
        New = count;
        count = temp;
    }
    head = New;
    return (0);
}
// the function by which you can print the linked list by recursion...::: but you should include the function in main function
void printrecursion(struct Node *temp)
{
    if (temp == NULL)
    {
        cout << endl;
        return;
    }
    cout << temp->data << " ";
    printrecursion(temp->next);
}
// the function by which you can print the linked list reverse way by recursion...::: but you should include the function in main function

void revprintrecursion(struct Node *temp)
{
       cout << endl;
    if (temp == NULL)
    {
        return;
    }
    printrecursion(temp->next);
    cout << temp->data << " ";
    
}

// main part
int main()
{
    for (;;) // for infinite the program
    {
        Node *temp = NULL;
        int i, n, x, j, a, b;
        cout << "press 0 for exit from the program,,, press 1 for insert at begining ,,,2 for insert at end ,,, 3 for nth position,,,,4 for deleting a node from nth position,,,5 for reverse the linked list:" << endl;
        cin >> j;
        if (j == 1)
        {
            insertbeg();
            print();
        }
        else if (j == 2)
        {
            cout << "enter the total numbers you want to insert" << endl;
            cin >> n;
            insertend(n);
            print();
        }
        else if (j == 3)
        {
            cout << "NOTE: before enter the position make sure the position is valid for inserting!! " << endl;
            cout << "now enter the position where you want to insert";
            cin >> a;
            if (head == NULL && a != 1 && a <= 0)
            {
                cout << "linkedlist is empty or you enter a invalid position... you 1st need to insert new node " << endl;
                continue;
            }
            cout << "enter the number you want to insert";
            cin >> b;
            insertnth(a, b);
            print();
        }
        else if (j == 4)
        {
            cout << "enter the position which node you want to delete:";
            cin >> a;
            if (head == NULL || a <= 0)
            {
                cout << "linkedlist is empty or you enter a invalid position... you 1st need to insert new node " << endl;
                continue;
            }
            else
            {
                deletenode(a);
                print();
            }
        }
        else if (j == 5)
        {
            reverse();
            print();
        }
        else if (j == 0)
        {
            break;
        }
        else
        {
            temp = head;
            printrecursion(temp);
            revprintrecursion(temp);
            cout << "Invalid input...please enter the valid input!!";
        }
        cout << endl;
    }
}
