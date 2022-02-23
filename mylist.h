#ifndef MYLIST_H
#define MYLIST_H

template<typename T>
class Node
{
public:
    Node *pNext;
    T data;
    Node(T data=T(), Node *pNext = nullptr)
    {
        this->data = data;
        this->pNext = pNext;
    }
};

template<typename T>
class MyList
{
public:
    MyList();
    ~MyList();

    void push_back(T data);
    int get_size(){ return Size; };
    T& operator[](const int index);
    void pop_front();
    void clear();
    void push_front(T data);
    void insert(T value, int index);
    void removeAt(int index);
    void pop_back();
private:


    int Size;
    Node<T> *head;
};


#endif // MYLIST_H
