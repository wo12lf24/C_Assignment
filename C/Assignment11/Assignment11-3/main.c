/*
Assignment11-3
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

struct node *head = NULL;
struct node *head2 = NULL;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    printf("Create First LinkedList\n");
    create();
    insert_end();
    insert_end();

    printf("Create Second LinkedList\n");
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    head2 = temp;
    printf("Enter the first data: ");
    scanf("%d", &head2->data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    temp->next = ptr;
    printf("Enter the second data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    concatList();
    display();

    free(head);
    free(head2);
    free(ptr);

    return 0;
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