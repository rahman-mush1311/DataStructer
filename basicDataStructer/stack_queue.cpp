//this is a programme using linked list it will work as stack and queue according to user command.
#include<stdio.h>

struct node{
    int data;
    node *next;
};

class LinkedList{
private:
    node *head ;
public:
    LinkedList(){
        head = new node();
        head -> next = NULL;
    }

    void insertFirst(int data){
        node *p = new node();
        p -> data = data;
        p -> next = head -> next;
        head -> next = p;
    }

    int getFirst(){
        if(head -> next == NULL) return -1;
        return head -> next -> data;
    }

    void removeFirst(){
        if(head->next == NULL) return;
        node *p = head -> next;
        head -> next = p -> next;
        delete p;
    }

    void insertLast(int n){
        node *curr = head;
        while(curr->next != NULL){
            curr = curr -> next;
        }
        node *p = new node();
        p -> data = n;
        p -> next = NULL;
        curr -> next = p;
    }

    int getLast(){
        node *curr = head;
        while(curr->next != NULL){
            curr = curr -> next;
        }
        return curr -> data;
    }

    void removeLast(){
        node *curr = head ;
        if(curr -> next == NULL) return;
        while(curr->next->next != NULL){
            curr =  curr -> next;
        }
        node *p = curr->next;
        curr->next = NULL;
        delete p;
    }
    bool hasMoreElment(){
        return (head->next!=NULL);
    }
};

class Stack{
private:
    LinkedList ll;
public:
    void push(int n){
        ll.insertFirst(n);
    }
    void pop(){
        ll.removeFirst();
    }
    int top(){
        return ll.getFirst();
    }
    bool isEmpty(){
        return !ll.hasMoreElment();
    }
};

class Queue{
private:
    LinkedList ll;
public:
    void enque(int n){
        ll.insertLast(n);
    }
    void deque(){
        ll.removeFirst();
    }
    int front(){
        return ll.getFirst();
    }
    bool isEmpty(){
        return !ll.hasMoreElment();
    }
};
void reverse(Queue *q){
    if(!q->isEmpty()){
        int n = q ->front();
        q->deque();
        reverse(q);
        q->enque(n);
    }

}

void insertAtBottom(Stack *s, int item)
{
    if (s->isEmpty())
        s->push(item);
    else
    {

        int temp = s->top();
        s->pop();
        insertAtBottom(s, item);

        s->push(temp);
    }
}


void reverse(Stack *s)
{
    if (!s->isEmpty())
    {

        int temp = s->top();
        s->pop();
        reverse(s);
        insertAtBottom(s, temp);
    }
}

int main(){
    /*stack s;
    for(int i=0;i<10;i++){
        s.push(i);
    }
    while(!s.empty()){
        int n = s.top();
        printf("%d ",n);
        s.pop;
    }*/

    Stack s;
    for(int i= 0 ; i < 10; i++)
    {
        s.push(i);
    }
   /* while(!s.isEmpty())
    {
        int n = s.top();
        printf("%d\n",n);
        s.pop();
    }*/
    reverse(&s);
    while(!s.isEmpty())
    {
        int n = s.top();
        printf("%d\n",n);
        s.pop();
    }
}

