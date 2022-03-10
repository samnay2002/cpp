///  what is the program??-- by taking value input(not position) from user delete the nodes whose of this value!!
// Note:: run the program and the you will understand why it is stuck by me
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
void insertbeg()
{
    int x, n;
    cout << "enter the total numbers you want to insert" << endl;
    cin >> n;
    for (int i = 0; i <n; i++)
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
// function for deleting a node by data
void deletebydata()
{
    int a,i=0;
    cout << "enter the value you want to delete:";
    cin >> a;
    Node *temp = new Node();
    temp = head;
    Node *temp1 = new Node();
    while (temp != NULL)
    {
        if (temp->data == a)
        {
            if (i==0)
            {
                head = temp->next;
            }
            else
            {
              
                temp1 = temp->next;
                temp->next = temp1->next;
            }
        }
        i++;
        temp=temp->next;
        //head=temp;
    }
    //head=temp;
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
// main fuction 
int main()
{
    for (;;) // for infinite the program
    {
        Node *temp = new Node();
        int i, n, x, j, a, b;
        cout<<"Note:: i'm still trying to slove this program and if you can then contribute now 🙂....|||"<<endl<<endl;
        cout << "press 0 for exit from the program,,, press 1 for insert at begining ,,,2 for deleting a node by data input :" << endl;
        cin >> j;
        if (j == 1)
        {
            insertbeg();
            print();
        }
        else if (j == 2)
        {
            deletebydata();
            print();
        }
        else if (j == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid input...please enter the valid input!!";
        }
        cout << endl;
    }
}