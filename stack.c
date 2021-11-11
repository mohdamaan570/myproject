#include <stdio.h>
#include<stdlib.h>

int n = 5;
int top = -1;

int *arr;
void push(int data)
{
    if (top == n - 1)
    {
        printf("Overflow\n");
        return;
    }
    top = top + 1;
    arr[top] = data;
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
        return;
    }
    top = top - 1;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}
void menu(int *choice)
{

    printf("Enter the following to run: \n1. push\n2. pop\n3. display\n4. exit\n");
    printf("Enter the value\n");
    scanf("%d", choice);
    printf("\n");
}

int main()
{
    arr=(int*)malloc(n*sizeof(int));1   int data;
    int choice;
    menu(&choice);
    while (1)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the data\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
        pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("You have entered the wrong value\n");
            break;
        }
        menu(&choice);
    }
}