#include"header.h"

struct student *hptr=NULL;
int main()
{
        stud_Dload();
        while(1)
        {
                char op;
                Index_fn();
		printf("Enter the choice : ");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'A':
                        case 'a':
                                printf("\n\t\t**Add New Record**\n\n");
                                stud_add();
                                break;
                        case 'D':
                        case 'd':
                                printf("\n\t\t**Delete a Record**\n\n");
                                stud_delete();
                                break;
                        case 'S':
                        case 's':
                                printf("\n\t\t**show the student list**\n\n");
                                stud_show();
                                break;
                        case 'M':
                        case 'm':
                                printf("\n\t\t**Modify a Record**\n\n");
                                stud_modify();
                                break;
                        case 'V':
                        case 'v':
                                printf("\n\t\t**Save the Record**\n\n");
                                stud_save();
                                break;
                        case 'T':
                        case 't':
                                printf("\n\t\t**sort the Record**\n\n");
                                stud_sort();
                                break;
                        case 'E':
                        case 'e':
                                printf("\n\t\t**Exit**\n\n");
                                stud_Exit();
                                break;
                }
        }
}

void Index_fn()
{

        printf("*----------------------------------------------------------------------------------------*\n");
        printf("|                            ****STUDENT RECORD MENU****                                 |\n");
        printf("*----------------------------------------------------------------------------------------*\n");
        printf("|                         1.   A/a: Add New Record                                       |\n");
        printf("|                         2.   D/d: Delete a Record                                      |\n");
        printf("|                         3.   S/s: Show The list                                        |\n");
        printf("|                         4.   M/m: Modify a Record                                      |\n");
        printf("|                         5.   V/v: Save The Record                                      |\n");
        printf("|                         6.   T/t: Sort The Record                                      |\n");
        printf("|                         7.   E/e: Exit !!!                                             |\n");
        printf("*----------------------------------------------------------------------------------------*\n");
}
	

