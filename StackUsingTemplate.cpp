#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<climits>
template<typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray()
    {   capacity = 4;
        data = new T[capacity];
        nextIndex = 0;
    }
    //return the no. of elements present in the stack
    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    // to insert an element in the stack

    void push(T element)
    {   if(nextIndex == capacity)
        {
            int *newData = new T[2*capacity];
            for(int i = 0;i<capacity;i++)
            {
                newData[i] = data[i];
            }
            capacity*=2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }


    T pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty!!! No deletion"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top()
    {   if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return data[nextIndex - 1];
    }

};
int main() {
    StackUsingArray<int> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;


    return 0;
}
