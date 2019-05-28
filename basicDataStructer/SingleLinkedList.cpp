#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node* head, *header;


void insertFirst(int value)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next = head->next;
    head->next= temp;

}

void insertLast(int value)
{
    /* Node* newnode[10];
     Node *temp=head;
     while(e<=maxi)
     {
     while(temp->next != NULL)
     {
         //cout << temp->data<< ' ';
         temp= temp->next;
     }
     }*/



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

        if(c>n)
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
    temp=head;
    temp=temp->next;
    head=temp;
    //free(temp);
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
    temp->next=NULL;


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
    //temp2=temp->next;
    //temp=temp2->next;


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

    while(temp->next!=NULL)
    {
        cnt++;
        temp=temp->next;
    }

    temp->data=value;

}

void sortList()
{
    Node *newnode=head;
    Node *cnt;

    while(newnode->next!=NULL)
    {
        newnode=newnode->next;

        for(cnt=newnode->next; cnt!=NULL; cnt=cnt->next)
        {
            if(newnode->data > cnt->data)
            {
                int temp = newnode->data;
                newnode->data = cnt->data;
                cnt->data = temp;
            }
        }
    }
}

void reverseList(Node *temp)
{
   if(temp==NULL)
        return ;
   else
   {

       reverseList(temp->next);
        cout << temp->data << endl;
   }
   /* Node *curr=head->next;
    Node *nextNode,*prev=NULL;

    while(curr!=NULL)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    head->next=prev;*/
}
Node* copyList(Node *temp)
{
    Node *newnode=(Node*)malloc(sizeof(struct Node));

    if(temp==NULL)
        return NULL;
    else
    {
        newnode->data=temp->data;
        newnode->next=copyList(temp->next);
        return newnode;
       // copyList(temp->next);
    }


}
void printcopyList()
{
    Node * temp= header->next;

    while(temp != NULL)
    {
        cout << temp->data<< ' ';
        temp= temp->next;
        //temp2=temp->next;
    }
    printf("\n");
}
void printList()
{
    Node * temp= head->next;

    while(temp != NULL)
    {
        cout << temp->data<< ' ';
        temp= temp->next;
        //temp2=temp->next;
    }
    printf("\n");
}

int main()
{
    head =(Node*)malloc(sizeof(struct Node));
    head->data=INT_MIN;
    head->next=NULL;

    int n, choice, x,flag=0;

    cout << "How Many Numbers " << endl;
    cin >> n;

    for(int i= 0; i<n; i++)
    {
        x=rand()%100;
        insertFirst(x);
        //insertLast(x);

    }
    //n=n+run;
    cout << "List is: " << endl;
    printList();
    //sortList();
    //reverseList(head->next);
   // printList();
   header =(Node*)malloc(sizeof(struct Node));
   header=copyList(header);
   //printcopyList();
    x=0;

    //n+=run;

    /* cout << "Enter choice: " << endl;
     cout << "1.Insert" << endl;
     cout << "2.Delete" << endl;
     cout << "3.Search" << endl;
     cout << "4.Update" << endl;
     cout << "5.Exit" << endl;

     while(cin >> choice)
     {



         if(choice==1)
         {
             int optoin,index;

             cout << "Select Insert Choice" << endl;
             cout << "1.Insert At First" << endl;
             cout << "2.Insert At Last " << endl;
             cout << "3. Insert At Index" << endl;
             cout << "4.Insert After Value" << endl;

             cout << "Enter Optoin: " << endl;
             cin >> optoin ;

             if(optoin ==1)
             {
                 int value;

                 cout << "Value to be inserted at first: " << endl;
                 cin >> value;
                 insertFirst(value);
                 n++;
             }
             else if(optoin ==2)
             {
                 int value;
                 //n++;
                 cout << "Value to be inserted at last: " << endl;
                 cin >> value;
                 insertLast(value);
                 n++;

             }
             else if(optoin ==3)
             {
                 int value;
                 //n++;
                 cout << "Value & index to be inserted: "<< endl;
                 cin >> value >> index;
                 insertIndex(value,index,n);
                 n++;
             }
             else if(optoin==4)
             {
                 int value,value_change;
                 //n++;
                 cout << "Value to be inserted after value: " << endl;
                 cin >> value >> value_change;
                 insertAfterValue(value_change,value,n);
                 n++;
             }

         }
         else if(choice==2)
         {
             int optoin,index;

             cout << "Select Delete Choice" << endl;
             cout << "1.Delete At First" << endl;
             cout << "2.Delete At Last " << endl;
             cout << "3.Delete After Value" << endl;
             cout << "4.Delete A Index" << endl;

             cout << "Enter option: " << endl;
             cin >> optoin ;

             if(optoin ==1)
             {

                 deleteFirst();
                 n--;
             }
             else if(optoin ==2)
             {
                 deleteATLast(n);
                 n--;
             }
             else if(optoin ==3)
             {
                 int value;
                 cout << "Value to be deleted: " << endl;
                 cin >> value ;
                 deleteAvalue(value,n);
                 n--;
             }
             else if(optoin==4)
             {
                 cout << "Index to be deleted: " << endl;
                 cin >> index ;

                 deletindex(index,n);
                 n--;
             }

         }

         else if(choice==3)
         {
             int value;

             cout << "Value to be Searched" << endl;
             cin >> value;
             searchList(value,n);
         }

         else if(choice ==4)
         {
             int value ,value_change,optoin,index;
             cout << "Select Update Choice" << endl;
             cout << "1.Update At First" << endl;
             cout << "2.Update At Last " << endl;
             cout << "3.Update A Value" << endl;
             cout << "4.Update A Index" << endl;

             cout << "Enter option: " << endl;
             cin >> optoin ;

             if(optoin==1)
             {
                 cout << "First Value to be Updated: " << endl;
                 cin >> value;
                 updateFirst(value);
             }
             else if(optoin==2)
             {
                 cout << "Last Value To be Updated: " << endl;
                 cin >> value;
                 updateLast(value,n);
             }
             else if(optoin==3)
             {

                 cout << "Value to be updated to which value: " << endl;
                 cin >> value >> value_change;
                 UpdateList(value,n,value_change);
             }
             else if(optoin ==4)
             {
                 cout << "Value To Be Updated to Index: " << endl;
                 cin >> value >> index ;
                 updateIndexValue(value,index,n);
             }


         }
         else if(choice == 5)
             exit(0);

         cout << "List is: " << endl;
         printList();

         cout << "1.Insert" << endl;
         cout << "2.Delete" << endl;
         cout << "3.Search" << endl;
         cout << "4.Update" << endl;
         cout << "5.Exit" << endl;
     }*/

    return 0;
}

