#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node* head;

void reverseStack(int value)
{

}


void push_stack(int value)
{
    Node *temp=(Node*) malloc(sizeof(Node));
    temp->data=value;
    temp->next=head->next;
    head->next=temp;
}

int top_stack()
{
    //Node *temp=(Node*)malloc(sizeof(Node));
    Node *temp;
    temp=head;
    temp=temp->next;
    return temp->data;
}

void pop_stack()
{
    Node *temp=(Node*)malloc(sizeof(Node));
    temp=head;
    temp=temp->next;
    head=temp;

}

bool isEmpty()
{
    if(head->next==NULL)
        return true;
    else
        return false;
}

void printList()
{
    Node *temp = head;
    temp= temp->next;
    while(temp!=NULL)
    {
        cout << temp->data << ' ';
        temp=temp->next;
    }
    cout << endl;
}

int main()
{
    head = (Node*)malloc(sizeof(Node));
    head->data=INT_MIN;
    head->next=NULL;

    int n;
    cin >>n;

    for(int i=1; i<=n; i++)
    {
        push_stack(i);
    }
    printList();


   /* while(!isEmpty())
    {
        //cout << top_stack() << endl;
        reverseStack(top_stack());
        // pop_stack();
    }*/

     if (!isEmpty())
    {
        int temp =top_stack();
        pop_stack();
        reverseStack(temp);

        push_stack(temp);
    }

    printList();




}
