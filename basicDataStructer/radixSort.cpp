#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

class LinkedList
{
private:
    node *head ;
public:
    LinkedList()
    {
        head = new node();
        head -> next = NULL;
    }

    void insertFirst(int data)
    {
        node *p = new node();
        p -> data = data;
        p -> next = head -> next;
        head -> next = p;
    }

    int getFirst()
    {
        if(head -> next == NULL) return -1;
        return head -> next -> data;
    }

    void removeFirst()
    {
        if(head->next == NULL) return;
        node *p = head -> next;
        head -> next = p -> next;
        delete p;
    }

    void insertLast(int n)
    {
        node *curr = head;
        while(curr->next != NULL)
        {
            curr = curr -> next;
        }
        node *p = new node();
        p -> data = n;
        p -> next = NULL;
        curr -> next = p;
    }

    int getLast()
    {
        node *curr = head;
        while(curr->next != NULL)
        {
            curr = curr -> next;
        }
        return curr -> data;
    }

    void removeLast()
    {
        node *curr = head ;
        if(curr -> next == NULL) return;
        while(curr->next->next != NULL)
        {
            curr =  curr -> next;
        }
        node *p = curr->next;
        curr->next = NULL;
        delete p;
    }
    bool hasMoreElment()
    {
        return (head->next!=NULL);
    }
};

class Stack
{
private:
    LinkedList ll;
public:
    void push(int n)
    {
        ll.insertFirst(n);
    }
    void pop()
    {
        ll.removeFirst();
    }
    int top()
    {
        return ll.getFirst();
    }
    bool isEmpty()
    {
        return !ll.hasMoreElment();
    }
};

class Queue
{
private:
    LinkedList ll;
public:
    void enque(int n)
    {
        ll.insertLast(n);
    }
    void deque()
    {
        ll.removeFirst();
    }
    int front()
    {
        return ll.getFirst();
    }
    bool isEmpty()
    {
        return !ll.hasMoreElment();
    }
};

int maxElement(Queue *q)
{
    int maxi=INT_MIN;

    while(!q->isEmpty())
    {
        maxi=max(maxi,q->front());
        q->deque();
    }
return maxi;
}

int sizeElement(int maxi)
{
    int c=0;

    while(maxi!=0)
    {
        c++;
        maxi/=10;
    }
    return c;
}

void radix_sort(Queue *q4,int a, int n)
{
    Queue q[10];
    int e=1, x, c, i;
    while(e<=a)
    {
        for(i=1; i<=n; i++)
        {
            x=(q4->front()/e)%10;
            q[x].enque(q4->front());
            q4->deque();
        }
        c=0;
        for(i=1; i<=n; i++)
        {
            while(q[c].isEmpty() && c<10)
                c++;
            q4->enque(q[c].front());
            q[c].deque();
        }
        e*=10;
    }
}


int main()
{
    int n;
    Queue q1[1000];
    Queue q2,q3,q4;
    cout << "How many elements: " << endl;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x=rand()%100;
        q2.enque(x);
        q3.enque(x);
        q4.enque(x);
    }

    cout << "Before Sorting :" << endl;

    while(!q2.isEmpty())
    {
        cout << q2.front() << endl;
        q2.deque();
    }

    int maxi=maxElement(&q3);
    int m=sizeElement(maxi);

    radix_sort(&q4,maxi,n);

    cout << "After Sorting: " << endl;

     while(!q4.isEmpty())
    {
        cout << q4.front() << endl;
        q4.deque();
    }








}
