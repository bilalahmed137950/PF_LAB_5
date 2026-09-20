#include<stdio.h>
int main()
{
	int age ;
	char day;
	float price;
	printf("Enter the age : ");
	scanf("%d",&age);
    printf("Enter the day type (w=weekday ,h=holiday): ");
    scanf(" %c",&day);
    if(age<12 || age>60)
	{
        if(day=='w')
        {
        	price=500;
		}
		else{
			price=700;
		}
	}
	else
	{
		if(day=='w')
		{
			price=1500;
		}
		else{
			price=1200;
		}
	}
	printf("Ticket price : %.2f \n",price);		
}		
