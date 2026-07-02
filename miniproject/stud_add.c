#include"header.h"

int roll_no()
{
    int roll = 01;
    struct student *T;
    while(1)
    {
        T = hptr;
        while(T != NULL)
        {
            if(T->roll == roll)
            {
                roll++;
                break;
            }
            T = T->next;
        }
        if(T == NULL)
            return roll;
    }
}

void stud_add()
{
    struct student *temp;
    temp = (struct student*)malloc(sizeof(struct student));

    printf("Enter the New Record Details\n");
    temp->roll = roll_no();
    printf("Assigned Roll_number: %d\n", temp->roll);

    printf("Enter the Student Name : ");
    scanf(" %[^\n]", temp->name);
    printf("Enter the Student Percentage: ");
    scanf("%f", &temp->percentage);

    temp->next = 0;
    if(hptr == 0)
    {
         hptr = temp;
    }
    else
    {
        struct student *last = hptr;
        while(last->next != NULL)
            last = last->next;
        last->next = temp;
    }
    printf("Record Added Successfully!!\n");
}


