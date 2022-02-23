#include <iostream>
#include "mylist.h"
#include "mylist.cpp"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    MyList<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    cout << a[2] << endl;
    return 0;
}
