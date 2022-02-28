#include <iostream>
using namespace std;

// Creating Node Structure
struct Node
{
    int data;
    struct Node *next;
};
// creating head pointer and equating to NULL
Node *head = NULL;

// Function to insert at the beginning of linked list
void insertbeg(int d)
{
    Node *ptr = new Node();
    ptr->data = d;
    ptr->next = head;
    head = ptr;
}
// function to insert at the end of the linkedlist
void insertend(int a)
{
    Node *temp = new Node();
    Node *temp1 = new Node();
    temp->data = a;
    temp->next = NULL;
    temp1 = head;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        while (temp1->next!= NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}
// function to print the linked list
int print()
{
    Node *temp = new Node();
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    return (0);
}
// main part
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    Node *temp = new Node();
    int i, n, x, flag;
    cout << "press 1 to insert at begining and 2 to insert end:"<<endl;
    cin >> flag;
    cout << "enter the total numbers" << endl;
    cin >> n;
    if (flag == 1)
    {
        for (i = 0; i < n; i++)
        {
            cout << endl
                 << "enter the numbers:" << endl;
            cin >> x;
            insertbeg(x);
            print();
            x = 0;
        }
    }
    else if (flag == 2)
    {
        for (i = 0; i < n; i++)
        {
            cout << endl<< "enter the number:" << endl;
            cin >> x;
            insertend(x);
            print();
            x = 0;
        }
    }
}