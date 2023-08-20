#include <iostream>
#include "calc.hpp"
#include <cstdlib>

using namespace std;

// //initializer
// template <typename T> void Stack<T> :: adding(T ele,T element){
//     printf("%0.2f", ele + element);
// }


//  Constructor

template <typename T>
Stack<T>::Stack()
{
    // asking the user about the size of the stack

    cout << YELLOW << "Enter the default size of the stack : [default - 5]";
    cin >> size;   

    // allocating memory to the array pointer
    
    arr = (T *)malloc(sizeof(T) * size);
    cout << GREEN << "\nStack Created...\n\n" << endl;
}




//  Destructor

template <typename T>
Stack<T>::~Stack()
{
    // freeing up memory
    free(arr);
    cout <<MAGENTA<< "Deallocating Memory......\n\n Exiting....\n" << RESET << endl;
}



// Pushing element


template <typename T>
void Stack<T>::push()
{
    T ele;

    // boundary condition of overflowing stack

    if (index == size - 1)
    {
        cout << YELLOW << "Stack will OverFLow.......\n" << endl;
        return;
    }


    // taking input
    cout <<MAGENTA << "Enter the element to be pushed into the stack : ";
    cin >> ele;

    // adding the input into the array
    arr[++index] = ele;
    cout << GREEN << "\nElement pushed!!!\n" << endl;
}




//deleteing element from the stack
template <typename T>
void Stack<T>::pop()
{
    if(index==-1)
        cout<<YELLOW<<"Stack UnderFLowing.....\n"<<RESET<<endl;
    else    
        cout <<GREEN<< "Element popped : " << arr[index--] <<RESET<< endl;
}



template<typename T>
void Stack<T> :: peek(){
    if(index==-1)
        cout<<MAGENTA<<"Stack is Empty Broo....\n"<<endl;
    else    
        cout<<MAGENTA<<"topmost element is : "<<arr[index]<<"\n\n"<<RESET;
}


template<typename T>
bool Stack<T>:: isEmpty(){

    if(index==-1)
        return true;

    return false;    
}


template<typename T>
bool Stack<T>:: isFull(){

    if(index==size-1)
        return true;

    return false;    
}


// Display


template <typename T>
void Stack<T>::display()
{
    if(index==-1)
        cout<<YELLOW<<"Stack is empty......"<<endl;
    else
        for (int i = index; i >= 0; i--)
        {
            if (i == index)
                cout <<MAGENTA<< "  |  " << arr[i] << "  |--> TOP" << endl;
            else
                cout <<MAGENTA<< "  |  " << arr[i] << "  |" << endl;
        }

    cout<<RESET<<endl;    
}




template class Stack<int>;
template class Stack<float>;
template class Stack<char>;