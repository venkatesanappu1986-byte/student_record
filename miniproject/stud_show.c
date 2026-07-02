#include"header.h"

void stud_show()
{
        struct student *ptr=hptr;
	printf("\n-------------------------------------------------\n");
        printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Percentage");
         printf("-------------------------------------------------\n");
        while(ptr!=0)
        {
                printf("%-10d %-20s %.2f\n",ptr->roll, ptr->name, ptr->percentage);
                ptr=ptr->next;
        }
        printf("\n-------------------------------------------------\n");
}


