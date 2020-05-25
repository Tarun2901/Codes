#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<climits>
class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray()
    {   capacity = 4;
        data = new int[capacity];
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

    void push(int element)
    {   if(nextIndex == capacity)
        {
        int *newData = new int[2*capacity];
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


    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty!!! No deletion"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {   if(isEmpty())
        {
        cout<<"Stack is empty"<<endl;
        return INT_MIN;
        }
        return data[nextIndex - 1];
    }

};
int main() {   
StackUsingArray s;
s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
s.push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.isEmpty()<<endl;


    return 0;
}