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
