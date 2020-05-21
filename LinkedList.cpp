#include<iostream>
using namespace std;
#include"Node.cpp"
//Create function to create a Linked List by entering the data only

Node* takeInput_Better(){
 int data;
cin>>data;
Node *head = NULL;
Node *tail= NULL;
while(data!=-1){
Node *newNode= new Node(data);
if(head == NULL)
{
head = newNode;
}
else {
tail->next = newNode;
tail = newNode;
}
cin>>data;
}
return head;
}

void print(Node *head)
{

while(head!=NULL)
{
cout<<head->data<<" ";
head=head->next;
}
}



int main()
{
Node *head = takeInput_Better();
print(head);
/*Node n1(1);
Node *head=&n1;
Node n2(2);
n1.next = &n2;
Node n3(3);
Node n4(4);
Node n5(5);
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;
cout<<head->data<<" "<<head->next->data;*/
return 0;
}
