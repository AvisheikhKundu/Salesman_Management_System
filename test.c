#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Sales_man
{
    int id;
    char name[50];
    char phone[20];
    int hour;
    struct Sales_man *next;

}* head;
void insert(int id, char* name, char* phone, int hour)
{

    struct Sales_man * Sales_man = (struct Sales_man *) malloc(sizeof(struct Sales_man));
    Sales_man->id = id;
    strcpy(Sales_man->name, name);
    strcpy(Sales_man->phone, phone);
    Sales_man->hour = hour;
    Sales_man->next = NULL;

    if(head==NULL)
    {
        head = Sales_man;
    }
    else
    {
        Sales_man->next = head;
        head = Sales_man;
    }
    system("cls");
    printf("\n\t\tSuccessfully inserted...\n");
    select();


}
void search(int id)
{
    struct Sales_man * temp = head;
    while(temp!=NULL)
    {
        if(temp->id==id)
        {
            system("cls");
            printf("\n\t\tSeller with ID number is found !!!\n");
            printf("\n\t\tID Number: %d", temp->id);
            printf("\t\tName: %s", temp->name);
            printf("\t\tPhone: %s", temp->phone);
            printf("\t\tHour: %d\n\n", temp->hour);
            select();
        }
        temp = temp->next;
}
    system("cls");
    printf("\t\tSeller with ID number %d is not found !!!\n", id);
    select();
}
void update(int id)
{

    struct Sales_man * temp = head;
    while(temp!=NULL)
    {

        if(temp->id==id)
        {
            printf("\t\tRecord with roll number %d Found !!!\n\n", id);
            printf("\t\tEnter new name: ");
            scanf("%s", temp->name);
            printf("\t\tEnter new phone number: ");
            scanf("%s", temp->phone);
            printf("\t\tEnter new Hour: ");
            scanf("%d",&temp->hour);
            system("cls");
            printf("\t\tUpdated Successful!!!\n");
            select();
        }
        temp = temp->next;

    }


    system("cls");
    printf("\t\tSeller with ID number %d is not found !!!\n", id);

    select();

}
void Delete(int id)
{
    struct Sales_man * temp1 = head;
    struct Sales_man * temp2 = head;
    while(temp1!=NULL)
    {

       if(temp1->id==id)
        {

            printf("\t\tRecord with ID number %d Found !!!\n", id);

            if(temp1==temp2)
            {

                head = head->next;
                free(temp1);
            }
            else
            {
                temp2->next = temp1->next;
                free(temp1);
            }
            system("cls");
            printf("\t\tRecord Successfully Deleted !!!\n");
            select();

        }
        temp2=temp1;
        temp1=temp1->next;

    }

    system("cls");
    printf("\t\tSeller with ID %d is not found !!!\n", id);
    select();

}
void display()
{
    int i=0;
    struct Sales_man *temp=head;
    system("cls");
    while(temp!=NULL)
    {
        i++;
        printf("\n\t\tID Number: %d", temp->id);
        printf("\t\tName: %s", temp->name);
        printf("\t\tPhone: %s", temp->phone);
        printf("\t\tHour: %d", temp->hour);
        temp = temp->next;

    }
    printf("\n\t\tTotal : %d\n\n",i);

    select();
}

void cover_page()
{

    system("color f0");
    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t*-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############              Welcome to Salesman Management       ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t*-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*");
    printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n");

}

void select()
{
    int choice;
    char name[50];
    char phone[20];
    int id;
    int hour;
    printf("\n\t\t1) Entry new man");
    printf("\n\t\t2) Search a man");
    printf("\n\t\t3) Delete a man");
    printf("\n\t\t4) Update man details");
    printf("\n\t\t5) Display all man details & Total");
    printf("\n\t\t6) Exit ");
    printf("\n\n\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n\t\tEnter Seller ID: ");
        scanf("%d", &id);
        printf("\n\t\tEnter name: ");
        scanf("%s", name);
        printf("\n\t\tEnter Contact number: ");
        scanf("%s", phone);
        printf("\n\t\tEnter working hour: ");
        scanf("%d", &hour);
        insert(id, name, phone, hour);
        break;
    case 2:
        printf("\n\t\tEnter ID Number to search: ");
        scanf("%d", &id);
        search(id);
        break;
    

