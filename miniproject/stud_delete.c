#include"header.h"
void stud_del(int n)
{
    struct student *temp = hptr, *prev = NULL;
    while(temp != 0)
    {
        if(temp->roll == n)
        {
            if(temp == hptr)
                hptr = temp->next;
            else
                prev->next = temp->next;
            free(temp);
            printf("Record Deleted Successfully!!\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Roll no not found...\n");
}

void stud_delroll()
{
    int roll;
    printf("Enter the Roll no : ");
    scanf("%d",&roll);
    stud_del(roll);
}

void stud_delname()
{
    char s[100];
    struct student *temp = hptr;
    int count = 0;
    int roll;
    
     if(hptr == NULL)
    {
        printf("No Student record found!!\n");
        return;
    }
    printf("Enter the name to search : ");
    scanf(" %[^\n]", s);

    printf("\n                         **Matching Student Records**                              \n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Roll No","Name","Percentage");
    printf("-----------------------------------------------------------------------------------\n");
    while(temp != NULL)
    {
        if(strcmp(temp->name,s) == 0)
        {
            printf("%-10d %-20s %.2f\n", temp->roll, temp->name, temp->percentage);
            count++;
        }
        temp = temp->next;
    }
    if(count == 0)
    {
        printf("No Records Found on this Name : %s\n", s);
        return;
    }

    printf("Enter the Roll NO to delete: ");
    scanf("%d",&roll);
    stud_del(roll);
}

void stud_delete()
{
    char op;
    if(hptr == NULL)

    {
        printf("No Records found!!\n");
        return;
    }
    

    printf("R/r : Delete using Roll Number\n");
    printf("N/n : Delete using student name\n");
    printf("Enter your choice : ");
    scanf(" %c",&op);

    switch(op)
    {
        case 'R': case 'r':
            printf("Deletion using Roll_no\n");
            stud_delroll();
            break;
        case 'N': case 'n':
            printf("Deletion using Student name\n");
            stud_delname();
            break;
        default:
            printf("INVALID OPTION!!\n");
    }
}


