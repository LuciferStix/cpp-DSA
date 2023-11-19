#include <iostream>
#include<string>
#include "LinkedList.hpp"
using namespace std;




template<typename T>
SinglyLL<T> ::SinglyLL()
{
    head = rear=NULL;
}

template<typename T>
void SinglyLL<T> :: pushR(T val){
    nodes++;

    // case-1: checking if Head is NULL
    if(head==NULL){
        head=new Node<T>(val);
        rear=head;
        return;
    }
    

    Node<T> *newnode=new Node<T>(val,NULL);
    rear->next=newnode;
    rear=newnode;
    
}

template<typename T>
void SinglyLL<T> :: pushF(T val){
    nodes++;
    // case-1: checking if Head is NULL
    if(head==NULL){
        Node<T> *temp=new Node<T>(val);
        head=temp;
        return;
    }

    Node<T> *temp=new Node<T>(val,head);
    head=temp;
    
}

template<typename T>
//position starts from 0
void SinglyLL<T>::insert(T val,int pos){

    if(pos<0 || pos >nodes){ 
        cout<<"position invalid "<<endl;
         return;
    }

    nodes++;


    if(head==NULL){
        Node<T> *temp=new Node<T>(val);
        head=temp;
        return ;
    }

    if(pos==0){
        SinglyLL::pushF(val);
        return;
    }
    if(pos==nodes){
        SinglyLL::pushR(val);
        return;
    }

    //creating a pointer which points to the head
    Node<T> *temp;
    temp=head;


    for(int i=0;i<=pos;i++){
        //when position is reached
        if(i==pos-1){
            //assigning the {->next (pointer) of new node } {from ->next of pos-1 node}

            Node<T> *newnode=new Node<T>(val,temp->next);

            temp->next=newnode;

        }

        temp=temp->next;
    }


}


template<typename T>
void SinglyLL<T>::removeR(){
    if(head==NULL){
        cout<<"no linked list to remove"<<endl;
    }
    else{
        --nodes;
        if(head->next==NULL){
            delete(head);
            head=NULL;
            cout<<"deleted..."<<endl;
        }
        else{
        Node<T> *temp=head;
        int count=0;
            //looking for the second last element
        while(temp->next!=NULL){
                count++;
                if(temp->next->next==NULL){
                    temp->next=NULL;
                    free(temp->next->next);
                    break;
                }
                temp=temp->next;        
            }
        cout<<count;
        }

        SinglyLL::display();
    }
}

template<typename T>
void SinglyLL<T> :: display(){

    Node<T> *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" => ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return;
}



int main()
{

    SinglyLL<int> a;
    a.pushR(9);
    a.insert(50,0);
    a.insert(20,1);
    a.insert(10,3);
    a.insert(100,0);
    a.insert(3230,1);
    a.display();
    cout<<"--------------------------"<<endl;

    SinglyLL<char> c;
    char name[]="Lucifer Stix";
    for(char i : name){
        if(i=='\0')
            continue;
        c.pushR(i);
    }
    c.display();


    
    // string options[]={"push at first","push at rear","insert anywhere","delete from rear","display"};
    // int flag=1;
    // int choice;
    // while(1){
    //     if(flag){
    //         cout<<"Welcome to the program of single Linked List \n"
    //             <<"\t\tHope u like it...\n"<<endl;

    //         flag--;    
    //     }

    //     for(int i=1;i<=sizeof(options)/sizeof(string);i++){
    //         cout<<i<<"."<<options[i-1]<<endl;
    //     }



    //     cout<<"\nchoice :";
    //     cin>>choice;



    // }
    
    return 0;
}