#include"header.h"

struct student *Roll_Modify(int roll)
{
	struct student *ptr=hptr;
	while(ptr!=NULL)
	{
		if(ptr->roll==roll)
			return ptr;
		ptr=ptr->next;
	}
	return NULL;
}
void stud_modify()
{
	char option;
	int roll;
	printf("\n\t\t R/r :By Roll Number\n");
	printf("\n\t\t N/n :By Name       \n");
	printf("\n\t\t P/p :By Percentage \n");
	printf("Enter your option : ");
	scanf(" %c",&option);

	struct student *temp=NULL;

	if((option=='R')||(option=='r'))
	{
		printf("Enter the Roll Number: ");
		scanf("%d",&roll);
		temp=Roll_Modify(roll);
	}
	else if((option=='N')||(option=='n'))
	{

		char s[50];
		printf("Enter the name :");
		scanf(" %[^\n]",s);
		struct student *ptr=hptr;
		printf("---------------------------------------------------------------------\n");
		printf("Roll No\tName\tPercentage\n");
		printf("---------------------------------------------------------------------\n");
		while(ptr!=NULL)
		{
			if(strcmp(ptr->name,s)==0)
				printf("%d\t%s\t%2.f\n",ptr->roll,ptr->name,ptr->percentage);
			ptr=ptr->next;
		}
		printf("---------------------------------------------------------------------\n");

		int roll;
		printf("Enter the Roll Number : ");
		scanf("%d",&roll);

		temp=Roll_Modify(roll);
	}
	
	else if((option=='P')||(option=='p'))
	{
		float f;
		printf("Enter the Percentage : ");
		scanf(" %f",&f);
		struct student *ptr=hptr;
		printf("---------------------------------------------------------------------\n");
		printf("Roll No\tName\tPercentage\n");
		printf("---------------------------------------------------------------------\n");
		while(ptr!=NULL)
		{
			if(ptr->percentage==f)
				printf("%d\t%s\t%.2f\n",ptr->roll,ptr->name,ptr->percentage);
			ptr=ptr->next;
		}
		printf("---------------------------------------------------------------------\n");
		int roll;
		printf("Enter the Roll Number : ");
		scanf("%d",&roll);
		temp=Roll_Modify(roll);
	}
	if(temp!=NULL)
	{
		char ch;
		printf("\n\t\t  N/n : change Name\n");
		printf("\n\t\t  P/p : change Percentage\n");
		scanf(" %c",&ch);

		if((ch=='N')||(ch=='n'))
		{
			printf("Enter the new name : ");
			scanf(" %[^\n]",temp->name);
		}
		else if((ch=='P')||(ch=='p'))
		{
			printf("Enter the new Precentage : ");
			scanf("%f",&temp->percentage);
		}
		printf("Record Modified Successfully\n");
	}
	else
		printf("INVALID ROLL NO!!\n");
}

