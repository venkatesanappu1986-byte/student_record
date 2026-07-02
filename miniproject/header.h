

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student
{
    int roll;
    char name[50];
    float percentage;
    struct student *next;
};

extern struct student *hptr ;


void Index_fn();
void stud_Dload();
void stud_add();
int  roll_no();
void stud_delete();
void stud_delroll();
void stud_del(int n);
void stud_delname();
void stud_show();
void stud_save();
void stud_modify();
struct student *Roll_Modify(int roll);
void stud_sort();
void stud_Exit();


