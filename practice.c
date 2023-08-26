#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

void push(stack *p)
{
    int var;
    if (p->top == p->size - 1)
    {
        printf("stack overflow!\n");
    }
    else
    {
        p->top++;
        printf("Enter the element you want to push: ");
        scanf("%d", &var);
        p->arr[p->top] = var;
    }
}
void pop(stack *p)
{
    int del;
    if (p->top == -1)
    {
        printf("stack underflow!\n");
    }
    else
    {
        del = p->arr[p->top];
        printf("Deleted element: %d\n", del);
        p->top--;
    }
}
void display(stack *p)
{
    int i;
    if (p->top == -1)
    {
        printf("Stack is empty can't display items!\n");
    }
    else
    {
        for (i = p->top; i >= 0; i--)
        {
            printf("%d\n", p->arr[i]);
        }
    }
}
int main()
{
    stack *s;
    printf("Enter the size of the stack: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Enter 1 to push.\nEnter 2 to pop.\nEnter 3 to display\nEnter 4 to exit.\n");
    int ch;
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(&s);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            display(s);
            break;
        case 4:
            free(s->arr);
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}