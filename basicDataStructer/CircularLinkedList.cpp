#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node* head;

void insertFirst(int value)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next = head->next;
    head->next= temp;

}

void insertLast(int value)
{
    Node* newnode = (Node*)malloc(sizeof(struct Node));
    Node *temp=head;
    while(temp->next != head)
    {
        temp= temp->next;
    }
    temp->next=newnode;
    newnode->data=value;
    newnode->next=head;


}

void insertIndex(int value,int index,int n)
{
    Node* newnode = (Node*)malloc(sizeof(struct Node));
    Node *temp=head;
    int c=0;
    int flag=0;
    while(c<index-1)
    {
        c++;
        temp= temp->next;

        if(c>n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "Index Out Of Bounds" << endl;
    else
    {
        newnode->data=value;
        newnode->next=temp->next;
        temp->next=newnode;
    }



}
void insertAfterValue(int value_change,int value,int n)
{
    Node* newnode = (Node*)malloc(sizeof(struct Node));
    Node *temp=head;
    int c=0,flag=0;
    while(temp->data!=value)
    {
        c++;
        temp= temp->next;

        if(c>n+1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "Value not Found" << endl;
    else
    {
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->data=value_change;
    }


}
void deleteFirst()
{
    Node *temp;
    Node *temp2;
    temp=head;
    temp=temp->next;
    temp2=temp->next;
    temp = head;

    while(temp != head)
        temp= temp->next;

    temp->next = temp2;


}

void deleteATLast(int n)
{
    Node *temp=head;
    int c=0;
    while(c<n-1)
    {
        c++;
        temp=temp->next;
    }
    //cout << temp->data << endl;
    temp->next=head;


}

void deleteAvalue(int value,int n)
{
    Node *temp=head;
    Node *temp2;
    int c=0, flag=0;

    while(temp->data!=value)
    {
        c++;

        temp2=temp;
        temp=temp->next;

        if(c>n)
        {
            flag=1;
            break;
        }
    }
    // cout << temp2->data << endl;
    //temp2->next=temp->next;

    if(flag==1)
        cout << "Value Not Found" << endl;
    else
        temp2->next=temp->next;
}
void deletindex(int index,int n)
{
    Node *temp;
    Node *temp2;
    temp=head;
    int c=0;
    int flag=0;
    while(c!=index)
    {
        c++;
        temp2 = temp;
        temp = temp -> next;

        if(c>n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "Index out of Bounds: " << endl;
    else
        // cout << temp2 -> data << endl;
        temp2 -> next = temp -> next;
}

void searchList(int value,int n)
{
    Node *temp;
    temp=head;
    int flag=0,c=0;

    while(true)
    {
        if(temp->data==value)
        {
            flag=1;
            break;
        }
        if(c>=n)
        {
            flag=0;
            break;
        }
        c++;
        temp=temp->next;
    }
    if(flag==1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}

void UpdateList(int value,int n,int value_change)
{
    Node *temp;
    temp= head;
    int c=0,flag=0;
    while(true)
    {
        c++;
        temp=temp->next;
        if(temp->data==value)
        {
            flag=1;
            break;
        }
        else if(c>n)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        temp->data=value_change;
    else
        cout << "Not Found" << endl;

}

void updateIndexValue(int value,int index,int n)
{
    Node *temp;
    temp = head;
    int cnt=0,flag=0;
    {
        while(true)
        {
            if(cnt==index)
            {
                flag=1;
                break;
            }
            else if(cnt>index || cnt>n)
                break;

            cnt++;
            temp=temp->next;
        }
        if(flag==1)
            temp->data=value;
        else
            cout << "Index Out Of Bound" << endl;
    }
}

void updateFirst(int value)
{
    Node *temp;
    temp=head;
    temp=temp->next;

    //cout << temp->data << endl;

    temp->data=value;
}

void updateLast(int value,int n)
{
    Node *temp;
    temp = head;

    int cnt=0;

    while(temp->next!=head)
    {
        cnt++;
        temp=temp->next;
    }

    temp->data=value;

}


void printList()
{
    Node * temp= head;
    temp=temp->next;
    while(temp != head)
    {
        cout << temp->data<< ' ';
        temp= temp->next;
    }
    printf("\n");
}

int main()
{
    head =(Node*)malloc(sizeof(struct Node));
    head->data=INT_MIN;
    head->next=head;

    int n, choice, x,flag=0;

    cout << "How Many Numbers " << endl;
    cin >> n;

    for(int i= 0; i<n; i++)
    {
        x=rand()%100;
        insertFirst(x);
        // insertLast(x);

    }
    cout << "List is: " << endl;
    printList();

        insertFirst(100);
        insertLast(20);
    //insertIndex(5,2,n);
    //insertAfterValue(2,69,n);
    //deleteFirst();
    // deleteATLast(n);
    // deleteAvalue(41,n);
// deletindex(1,n);
    // deleteAvalue(69,n);
    //searchList(10,n);
    // UpdateList(0,n,30);
    //updateFirst(300);
    //updateLast(20,n);
    //updateIndexValue(2,2,n);
    printList();



    // cout << head <<' ' << head->next << ' ' << temp->next << ' ' << temp;

    return 0;
}
