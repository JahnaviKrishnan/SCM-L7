#include<stdio.h>
int main()
{
	int choice;
		switch(choice)
		{
			case 1: {
					printf("course is cse chosen");}
			case 2: {
					printf("course AI/ML is chosen");}
			case 3:{
				       printf("course Robotics is chosen");}
		         case 4: { printf("course data science is chosen");}
			 default:{"please enter a valid choice"}
		} exit(0);
		printf("welcome! please press 1 for cse /n press 2 for AI/ML /n press 3 for robotics /n press 4 for data science");
		if (choice==1){
			goto case 1:
}
else if(choice==2){
	goto case 2:} 
	else if(choice==3){
		goto case 3:}
		else if (choice==4){
			goto case 4:
		}
}
