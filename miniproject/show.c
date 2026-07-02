   #include"header.h"

void stud_show()
{
        struct student *ptr=hptr;
        printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
        while(ptr!=0)
        {
        printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",ptr->roll,ptr->name,ptr->percentage);
        ptr=ptr->next;
        }
}