#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;
    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

    void print(Node * head)
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
            
        }
    }

int main()
{
    Node n1(1);
    Node *head=&n1;

    Node n2(2);
    n1.next=&n2;

    Node n3(3);
    n2.next=&n3;
    print(head);
}
