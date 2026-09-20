#include<stdio.h>
int main(){
	int marks;
	printf("Enter the marks (0-100) : ");
	scanf("%d",&marks);
	if(marks<0 || marks>100){
		printf("invalid input ");
	}
	else if(marks>=90 ){
		if(marks==100){
		printf("Perfect score");}
		else{
			printf("Grade A");
		}}
	else if(marks>=75){
	    printf("Grade B");
		}
	else if(marks>=60)
	    {
	   	printf("Grade C");
		}
    else if(marks>=40)
	    {
        printf("Grade D");
		}
	else {
	    printf("Grade fail");
		}
	
	    return 0;
	}

