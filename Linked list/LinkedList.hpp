#include <iostream>
using namespace std;

template<typename T>
struct Node
{
    T data;
    Node *next;

    // Node(){
    //     data=0;
    //     next=NULL;
    // }
    Node(int val = 0, Node *nextptr = NULL)
    {
        data = val;
        next = nextptr;
    }
};


template <typename T>
class SinglyLL
{
private:
    // maintaining a rear node to reduce traversing
    Node<T> *rear;

    Node<T> *head;

public:

    // maintaining number of linked list
    int nodes = 0;
    // constructor
    SinglyLL();

    // push at rear
    void pushR(T);
    // void push at first
    void pushF(T);

    // push anywhere
    void insert(T, int);

    // remove from rear
    void removeR();


    void display();
};