#include <iostream>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node *next;
    Node *prev;
};

Node *START = NULL;

void addNode()
{
    Node *newNode = new Node();
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;

// insert the new node int the list
    if (START == NULL || newNode->noMhs <= START->noMhs)
    { // insert the new node at the beginning. 2

        if (START != NULL && newNode->noMhs == START->noMhs)
        {
            cout << "\033[31mDuplicate roll numbers not allowed\033]0m" << endl;
            return;
        }
        // if the list is empty, make the new node the START
        newNode-> next = START; // 3. make the new node point to the first node
        if (START != NULL)
        {
            START->prev = newNode; // 4. make the first node point to the new node
        }
        newNode->prev = NULL; // 5. make the new node point to NULL
        START = newNode;      // 6. make the new node the first node
    }



