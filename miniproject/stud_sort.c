#include"header.h"

void stud_sort()
{
	char op;
	printf("\n\t\t N/n-->sort by name\n");
	printf("\n\t\t P/p-->sort by percentage\n");
	printf("\n\t\t T/t-->Display the Record\n");
	printf("Enter the option : ");
	scanf(" %c",&op);

	if(hptr==NULL)
	{
		printf("Record Not Found!!\n");
		return;
	}

	struct student *p,*q;
	int temp_roll;
	char temp_name[100];
	float temp_percentage;

	if((op=='N')||(op=='n'))
	{
		for(p=hptr;p!=NULL;p=p->next)
		{
			for(q=p->next;q!=NULL;q=q->next)
			{
				if(strcasecmp(p->name,q->name)>0)
				{
					temp_roll=p->roll;
					p->roll=q->roll;
					q->roll=temp_roll;

					strcpy(temp_name,p->name);
					strcpy(p->name,q->name);
					strcpy(q->name,temp_name);

					temp_percentage=p->percentage;
					p->percentage=q->percentage;
					q->percentage=temp_percentage;
				}
			}
		}
		printf("Record Stored Sucessfully!!\n");
	}
	else if((op=='P')||(op=='p'))
	{
		for(p=hptr;p!=NULL;p=p->next)
		{
			for(q=p->next;q!=NULL;q=q->next)
			{
				if(p->percentage > q->percentage)
				{	
					temp_roll=p->roll;
					p->roll=q->roll;
					q->roll=temp_roll;

					strcpy(temp_name,p->name);
					strcpy(p->name,q->name);
					strcpy(q->name,temp_name);

					temp_percentage=p->percentage;
					p->percentage=q->percentage;
					q->percentage=temp_percentage;
				}
			}
		}
		printf("Record Sorted Successfully!!\n");
	}
	else if((op=='T')||(op=='t'))
	{
		stud_show();
	}
	else
		printf("INVALID OPTION!!\n");
}























