#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *last, *t;
    int i;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void RDisplay(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        RDisplay(p->next);
    }
}

int Count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int Sum(struct Node *p)
{
    int s = 0;
    while (p != NULL)
    {
        s = s + p->data;
        p = p->next;
    }
    return s;
}

int Max(struct Node *p)
{
    int max = -32767;
    while (p != NULL)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return 1;
        p = p->next;
    }
    return 0;
}

void Insert(struct Node *p, int index, int key)
{
    struct Node *t;
    if (index < 0 || index > Count(p))
        return;
    t = new Node;
    t->data = key;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

void SortedInsert(struct Node *p, int key)
{
    struct Node *t, *q = NULL;
    t = new Node;
    t->data = key;
    t->next = NULL;

    if (p == NULL)
        first = t;
    else
    {
        while (p && p->data < key)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = p;
            q->next = t;
        }
    }
}

void Delete(struct Node *p, int key)
{
    struct Node *q;
    while (p && p->data != key)
    {
        q = p;
        p = p->next;
    }
    if (p->data == key)
    {
        if (p == first)
        {
            first = p->next;
            delete p;
        }
        else
        {
            q->next = p->next;
            delete p;
        }
    }
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{
    int A[] = {2, 2, 3, 5, 5, 8, 8, 15};
    create(A, 8);

    // cout <<"\n" << Count(first);
    // cout <<"\n" << Sum(first);
    // cout <<"\n" << Max(first);
    // cout <<"\n" << Search(first, 4);
    // Insert(first,5,50);
    // SortedInsert(first,20);
    // Delete(first,5);
    RemoveDuplicate(first);
    Display(first);
}