#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} *head,*last = NULL ;

void create(int A[], int n)
{
    struct Node *last, *temp;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(struct Node *n)
{
    n = head;
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
void displayr(struct Node *n)
{
    if (n != NULL)
    {
        cout << n->data << " ";
        displayr(n->next);
    }
}
int add(struct Node *n)
{
    int add = 0;

    while (n != NULL)
    {
        add = add + n->data;
        n = n->next;
    }
    return add;
}
int count(struct Node *n)
{
    int count = 0;

    while (n != NULL)
    {
        count++;
        n = n->next;
    }
    return count;
}
int radd(struct Node *n)
{
    if (n != NULL)
    {
        return radd(n->next) + n->data;
    }
    else
    {
        return 0;
    }
}
int rcount(struct Node *n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return count(n->next) + 1;
    }
}
int max(struct Node *n)
{
    int max = INT32_MIN;
    while (n != NULL)
    {
        if (n->data > max)
        {
            max = n->data;
        }
        n = n->next;
    }
    return max;
}

int rmax(struct Node *n)
{
    int x = 0;
    if (n == 0)
    {
        return 0;
    }

    else
    {
        x = rmax(n->next);
        if (x > n->data)
        {
            return x;
        }
        else
        {
            return n->data;
        }
    }
}
int min(struct Node *n)
{
    int min = INT32_MAX;
    while (n != NULL)
    {
        if (n->data < min)
        {
            min = n->data;
        }
        n = n->next;
    }
    return min;
}
struct Node *linearSearch(struct Node *n, int key)
{
    if (n == NULL)
    {
        return NULL;
    }
    if (n->data == key)
    {
        return n;
    }
    else
    {
        return linearSearch(n->next, key);
    }
    return NULL;
}
struct Node *MTHlinearSearch(struct Node *n, int key)
{
    struct Node *prev;
    while (n != NULL)
    {
        if (n->data == key)
        {
            prev->next = n->next;
            n->next = head;
            head = n;

            return n;
        }

        prev = n;
        n = n->next;
    }
    return NULL;
}
void insert(struct  Node *n,int pos,int data)
   {
       if(pos <0 && pos>count(n))
       {
           return;
       }
       struct Node *temp=new Node;
        temp->data=data;
       if(pos==0)
       {    
          // temp->data=data;
           temp->next=head;
           head=temp;
           last=head;
        }
       else if(pos>0)
       {
           n=head;
           n=last;
           for (int i = 0; i < pos-1 && n; i++) //&& n to check whether n is no null;
           {
               n=n->next;
            }
          temp->next=n->next;
          n->next=temp; 
        }
   }


int main()
{

   // int A[] = {10, 20, 40, 30, 40, 50, 90};
    // create(A, 7);
    //struct Node n;

    // displayr(head);
    // int sum = radd(head);
    // cout << "\n";
    // cout << sum << "\n";
    // int ct = rcount(head);
    // cout << ct << "\n";
    // int maxele = rmax(head);
    // cout << maxele << "\n";
    // int minele=min(head);
    // cout<<minele<<"\n";
    // cout<<INT16_MAX<<"\n";
    // struct Node *temp;
    // MTHlinearSearch(head, 90);
    // MTHlinearSearch(head,50);
    // if (temp == NULL)
    // {
    //     cout << "Key Not Found!!" << endl;
    // }
    // else
    // {
    //     cout << "Key Found:" << temp->data << endl;
    // }
    // insert(head,0,5);
    // insert(head,1,10);
    // // insert(head,0,1);
    // insertLast(20);
    // insertLast(30);
    // // insert(head,0,10);
    // // insert(head,0,5);
    // insertLast(40); 
    

    display(head);

    //  int *a;
    //  int *b=a;
    // cout<<b;



    return 0;
}