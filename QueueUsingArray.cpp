#include<bits/stdc++.h>
using namespace std;
template<typename T>
class QueueUsingArray{
     T *data;
     int ni;
     int fi;
     int size;
     int capacity;
public:
    QueueUsingArray(int s)
    {
        data = new T[s];
        ni = 0;
        fi = -1;
        size = 0;
        capacity = s;
    }

    int getSize(){
        return size;
    }

    bool isEmpty()
    {
      return size==0;
    }

    void enqueue(T element)
    {   if(size == capacity)
        {
        cout<<"Queue is full"<<endl;
        return;
        }
        data[ni] = element;
        ni=(ni+1)%capacity;
        if(fi==-1) // Update firstIndex while entering the first value
            fi = 0;
        size++;
    }

    T dequeue()
    {   if(fi==-1)
        {
        cout<<"Queue is empty"<<endl;
        return 0;
        }
        T ans = data[fi];
        fi = (fi+1)%capacity;
        size--;
        if(size == 0)
        {
            fi = -1;
            ni = 0;
        }
        return ans;
    }

    T front() {
        if (fi != -1) {
            return data[fi];
        }
        else
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
    }
};

int main()
{   QueueUsingArray<int> q(5);
q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
cout<<q.getSize()<<endl;
cout<<(bool)(q.isEmpty())<<endl;

    return 0;
}