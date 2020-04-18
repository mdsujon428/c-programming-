#include<stdio.h>

#include<conio.h>


int stack[100],choice,n,i,x,top;
 
 void push(void)
{
 if(top>=n-1)
{
  printf("\n STACK is Overfloe");
}
 
else 

{ printf("\n\n Enter a Value to be pushed:");
 scanf("%d",&x);

 top++;

 stack[top]=x;
}
}
 
 void pop(void)

{
if(top>=0)
{
 printf("\n\n poped element is=%d",stack[top]);
  top=top-1;
}
else{
 printf("\n\n STACK is Emty");
}
}
void display(void)

{
if(top>=0)
{
for(i=top;i>=0;i--)
{
printf("\n\n STACK Element is:%d",stack[i]);
}

}

  printf("\n\nPlease Press another Choice ");

}
int main()

{top=-1;

printf("\n Enter the size of STACK[100]:");

scanf("%d",&n);

printf("\n\n\n 1.Push\n 2.Pop \n 3.Display\n");



do
{
 printf("\n\n Enter your choice: ");
 scanf("%d",&choice);

 switch (choice)
  
{
 case 1:{
  push();
  break;
}
 case 2:
{
 pop();
 break;
}
 case 3:
{
 display();
  break;
}
 case 4:
{
printf("\n EXIT OPERATION \n");
 break;
}
 default :

{
 printf("\n\n Enter choice, 1 to 4");
}

}
}
while(choice!=4);
return 0;
};
