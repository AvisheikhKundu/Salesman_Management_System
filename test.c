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
