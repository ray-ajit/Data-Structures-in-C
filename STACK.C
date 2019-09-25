#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack
{
 int size;
 int top;
 int *s;
};

void create(struct stack *st)
{
 printf("Enter the size of stack.\n");
 scanf("%d",&st->size);
 st->top=-1;
 st->s=(int *)malloc(sizeof(int)*st->size);
}

//Function to display the stack

void display(struct stack *st)
{
 printf("STACK\n");
 while(st->top!=-1)
 {
  printf("%d\n",st->s[st->top]);
  st->top--;
 }
}

//Function to insert(push) an element in the stack.


void push(struct stack *st,int data)
{
 if(st->top==st->size-1)
     printf("STACK OVERFLOW.\n");

 else
 {
  st->top++;
  st->s[st->top]=data;
 }
}

//Function to delete(pop) an element from the stack

int pop(struct stack *st)
{
 int x=-1;
 if(st->top==-1)
    printf("STACK UNDERFLOW.\n");

 else
 {
  x=st->s[st->top];
  st->top--;
 }
 return x;
}

//Function to check the top of the stack.

int stackTop(struct stack st)
{
 if(st.top==-1)
      return -1;

 return st.top;
}

//Function to check whether the stack is empty or not

int isEmpty(struct stack st)
{
 if(st.top==-1)
    return 1;

 else
     return 0;
}

//Function to check whether the stack is full or not

int isFull(struct stack st)
{
 if(st.top==st.size-1)
    return 1;

 else
    return 0;
}

void main()
{
 struct stack st;
 clrscr();
 create(&st);
 push(&st,10);
 push(&st,20);
 push(&st,18);
 push(&st,24);
 push(&st,27);
 pop(&st);
 push(&st,32);
 display(&st);
 getch();
}