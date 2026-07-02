#include"header.h"
void stud_Dload()
{
        FILE *f1=fopen("student.dat","r");
        if(f1==NULL)
        {
                printf("No Previous Data Found\n");
                return;
        }

        int roll;
        char name[50];
        float percentage;

        while(fscanf(f1,"%d %s %f",&roll,name,&percentage)!=EOF)
        {
                struct student *new;
                new=(struct student *)malloc(sizeof(struct student));
                new->roll=roll;
                strcpy(new->name,name);
                new->percentage=percentage;

                new->next=NULL;

                if(hptr==NULL)
                {
                        hptr=new;
                }
                else
                {
                        struct student *ptr=hptr;
                        while(ptr->next!=NULL)
                        {
                                ptr=ptr->next;
                        }
                        ptr->next=new;
                }
        }
        fclose(f1);
        printf("Data loaded successfully!!\n");
}



