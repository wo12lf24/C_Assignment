/*
Assignment11-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void concatList();
void reverseLinkedList();
int isPallndrome();

struct node *head = NULL;
struct node *head2 = NULL;

struct node
{
    int data;
    struct node *next;
};
int counter = 0;
int main()
{
    printf("Create LinkedList\n");
    create();
    counter++;
    insert_end();
    counter++;
    insert_end();
    counter++;
    insert_end();
    counter++;
    display();

    int result;
    result=isPallndrome();
    if(result==1)
    {
        printf("The linked list is a palindrome.\n");
    }
    else
    {
        printf("the linked list is not a palindrome.\n");
    }
    return 0;
}
int isPallndrome()
{
    int i =0,j;
    struct node*front,*rear;
    while(i!=counter/2)
    {
        front =rear=head;
        for(j=0;j<i;j++)
        {
            front=front->next;
        }
        for(j=0;j<counter-(j+1);j++)
        {
            rear=rear->next;
        }
        if(front->data!=rear->data)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
    return 1;
}
void reverseLinkedList()
{
    struct node *prevNode, *curNode;
    if (head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;
        while (head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = head;
        }
        head = prevNode;
        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}

void concatList()
{
    struct node *temp = head2;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node date: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }
    printf("LinkedList: ");
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void insert_pos()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        struct node *prev_ptr = NULL;
        struct node *ptr = head;
        int pos;
        printf("Enter position: ");
        scanf("%d", &pos);
        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr;
        prev_ptr->next = temp;
    }
}
void insert_end()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void delete_begin()
{
    if (head == NULL)
    {
        printf("Linked List is empty | Nothing to delete \n");
        return;
    }
    else
    {
        struct node *ptr = head;
        head = head->next;
        free(ptr);
        printf("Node Deleted \n");
    }
}
void delete_end()
{
    if (head == NULL)
    {
        printf("Linked List is empty | Nothing to delete \n");
        return;
    }
    else if (head->next == NULL)
    {
        struct node *ptr = head;
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node *ptr = head;
        struct node *prev_ptr = NULL;
        while (ptr->next != NULL)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = NULL;
        free(ptr);
    }
}
void delete_pos()
{
    int pos;
    printf("Enter node position to delete: ");
    scanf("%d", &pos);
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("Linked List is empty \n");
        return;
    }
    else if (pos == 0)
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
    else
    {
        struct node *prev_ptr = NULL;
        for (int i = 0; i < pos; i++)
        {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = ptr->next;
        free(ptr);
    }
}