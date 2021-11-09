#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
} *start = NULL;
void insert_end(int data)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
        return;
    }
    q = start;
    while (q->next != NULL)
        q = q->next;
    q->next = temp;
}

void insert_beg(int data)
{
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    q->info = data;
    q->next = start;
    if (start != NULL)
    {
        q->next=start;
        q=start;
    }
  else {
      q=start;
  }
}

void display()
{
    struct node *ptr = start;
    printf("[ ");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->info);
        ptr = ptr->next;
    }
    printf("]");
    printf("\n");
}
// void dlt()
// {
//     struct node *p = start, *q;
//     while (p->next != NULL)
//     {
//         q = p;
//         p = p->next;
//     }
//     q->next = NULL;
//     free(p);
// }
void main()
{
    insert_end(5);
    display();
    insert_end(12);
    display();
    insert_end(13);
    display();
    insert_beg(25);
    display();
    // dlt();
    // display();
}