#include<bits/stdc++.h>
using namespace std;
template<typename T,typename V>
class Pair
{
    T x;
    V y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }

    void setY(V y)
    {
        this->y = y;
    }
    V getY()
    {
        return y;
    }
};

int main(){
   /* Pair<int> p1;
    p1.setX(10);
    p1.setY(20);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    Pair<float> p2;
    p1.setX(10.23);
    p1.setY(20.34);
    cout<<p2.getX()<<endl;
    cout<<p2.getY()<<endl;

    Pair<char> p3;*/
   Pair<Pair<int,int>,int> p2;
   p2.setY(10);
   Pair<int,int> p4;
   p4.setX(15);
   p4.setY(16);
   p2.setX(p4);
   cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<" "<<p2.getY();

   return 0;
}