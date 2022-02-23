#include "mylist.h"
template<typename T>
MyList<T>::MyList()
{
    Size = 0;
    head = nullptr;
}


template<typename T>
MyList<T>::~MyList()
{
    clear();
}


template<typename T>
void MyList<T>::push_back(T data)
{
    if(head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T> *current = this->head;
        while(current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }
    Size++;
}


template<typename T>
T& MyList<T>::operator[](const int index)
{
    int counter = 0;
    Node<T> *current = this->head;
    while(current != nullptr)
    {
        if(counter == index)
        {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }
}

template<typename T>
void MyList<T>::pop_front()
{
    Node<T> *temp = head;
    head = head->pNext;
    delete temp;
    Size--;

}

template<typename T>
void MyList<T>::clear()
{
    while(Size)
    {
        pop_front();
    }
}

template<typename T>
void MyList<T>::push_front(T data)
{
    head = new Node<T>(data, head);
    Size++;
}

template<typename T>
void MyList<T>::insert(T value, int index)
{
    if(index==0)
    {
        push_front(value);
    }
    else
    {
        Node<T> *previos = this->head;
        for(int i = 0; i<index-1;i++)
        {
            previos=previos->pNext;
        }
        previos->pNext = new Node<T>(value, previos->pNext);
        Size++;
    }
}

template<typename T>
void MyList<T>::removeAt(int index)
{
   if(index==0)
   {
       pop_front();
   }
   else
   {
       Node<T> *previos = this->head;
       for(int i = 0; i<index-1;i++)
       {
           previos = previos->pNext;
       }
       Node<T> *toDelete = previos->pNext;
       previos->pNext = toDelete->pNext;
       delete toDelete;
       Size--;
   }
}

template<typename T>
void MyList<T>::pop_back()
{
    removeAt(Size-1);
}










