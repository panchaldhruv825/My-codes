#include<stdio.h>
int n;
printf("Enter the size of the stack")
scanf("%d",&n);
int stack[n];
int top=-1;
int choice,value;

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if(top==n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int Item)
{
    if(isFull())
    {
        printf("Stack is overflow can not be insert further")
    }
    else
    {
        printf("Enter the element")
        scanf("%d",&Item);
        top++;
        stack[top]=Item;

    }

}
void pop()
{
    if(isEmpty())
    {
        printf("Satck is underflow");
    }
    else
    {
        printf("%d Deleted sucessfully",stack[top]);
        top--;

    }
    void print_top()
    {
        if(isEmpty())
        {
            printf("Stack is empty");
        }
        else
        {
            printf("Top element=%d\n",stack[top]);
        }
    }
}
int main()
{
    while(True)
    {
        printf("\n------STACK MENU------\n");
        printf("1.TO check emptiness\n");
        printf("2.To check fullness\n");
        printf("3.To insert the element\n");
        printf("4.To delete the element\n");
        printf("5.TO exit the program");
        printf("Enter your choice");
        scanf("%d",&choice);



         switch(choice)
         {
            case 1:
            if(isEmpty())
            {
                printf("Stack is empty");
            }
            else
            {
                printf("Stack is not empty");
            }
            break;
            case 2:
            if(isFull())
            {
                printf("Stack is full");
            }
            else
            {
                printf("Stack is not full");
            }
            break;
            case 3:
            push();
            break;
            case 4:
            pop();
            break;
            case 5:
            print_top;
            break;
            case 6:
            printf("Exiting program...\n");
            break;
         }
        }
        return 0;
    }
