#include"header.h"

void stud_save()
{
        FILE *fs=fopen("student.dat","w");
        struct student *ptr;
        ptr=hptr;
        while(ptr!=NULL)
        {
                fprintf(fs,"%d %s %1.f\n",ptr->roll, ptr->name, ptr->percentage);
                ptr=ptr->next;
        }
        fclose(fs);
	printf("Data Stored Successfully\n");	
}


