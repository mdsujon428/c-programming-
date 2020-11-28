#include<stdio.h>
#include<stdlib.h>

struct node{

  int data;
  struct node* next;

};

struct node* head=NULL;
int len;

void append(void);
void add_at_begain(void);
int length(void);
void Display (void);
void Delete (void);
void add_at_middle(void);
void reverse_linked_list(void);

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Append\n");
        printf("2.Add_At_Begain\n");
        printf("3.Length\n");
        printf("4.Display\n");
        printf("5.Delete\n");
        printf("6.Add_at_middle\n");
        printf("7.Reverse Linked List\n");
        printf("8.Exit\n");

        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: append();
            break;

            case 2: add_at_begain();
            break;

            case 3:len=length();
            printf("Length of List is : %d\n",len);
            break;

            case 4:Display();
            break;

           case 5: Delete();
            break;

            case 6:add_at_middle();
            break;

            case 7:reverse_linked_list();
            break;

            case 8: exit(1);
            break;

            default :printf("Wrong Choice,Please Choice 1 to 8\n");
        }
    }

    return 0;
}

void append()
{
    struct node* temp,*p;

    temp=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&temp->data);

    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }

    else{

        p=head;

        while(p->next !=NULL)
        {
            p=p->next;
        }

        p->next=temp;

    }
}

void add_at_begain()
{
    struct node* temp;

    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;

}

void Display()
{
    struct node* temp=head;
    if(temp==NULL)
    {
        printf("List is Empty\n");
    }
    else{
    while(temp !=NULL)
    {
        printf("%d-->",temp->data);
       temp=temp->next;
    }
    }
}

int length(void){

    struct node* temp=head;
    int count=0;

    while(temp !=NULL)
    {
        count++;
        temp=temp->next;
    }

return count;
}

void Delete()
{
    struct node* p,*q,*temp;

     int j,location,i=0;
     printf("Enter Location : ");
     scanf("%d",&location);
    j=length();

     if(location>j)
    {
        printf("Invalid Location \n");
        printf("Length of List is : %d\n",j);
    }

    else if(location==1)
    {
       p=head;
       head=p->next;
       p->next=NULL;
       free(p);
    }

    else
    {   temp=head;
        while(i<location-2)
        {
            temp=temp->next;
            i++;
        }
        q=temp->next;
        temp->next=q->next;
        q->next=NULL;
        free(q);
    }
    Display();
}

void add_at_middle()
{
    struct node* temp,*p,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d",&temp->data);
    temp->next=NULL;   //This line is not required.
   int location,i=0;
   p=head;
   printf("Enter Location : ");
   scanf("%d",&location);

   while(i<location-2)
   {
    p=p->next;
    i++;
   }

   q=p->next;
   p->next=temp;
   temp->next=q;

}

void reverse_linked_list()
{
   int i,j,len,k,temp;
   struct node* p,*q;
   p=q=head;
   i=0;
   len=length();
   j=len-1;

       while(i<j)
       {
          k=0;

           while(k<j)
           {
               q=q->next;
               k++;
           }
           temp=p->data;
           p->data=q->data;
           q->data=temp;
           i++;
           j--;
           p=p->next;
           q=head;
       }
    Display();
}
