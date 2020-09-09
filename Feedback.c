#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	int choice3,choicefile;
	ptr = fopen("program.txt","a");
	char feedback[][1000]={"1. Begins and ends the class on time.","2. Is well-prepared for class.",
	"3. Is organized and teaches clearly.","4. Checks during class to see if students understand the material.",
	"5. Encourages students to ask questions and participate.","6. Answers questions clearly.",
	"7. Knows the subject matter of this course.","8. Shows interest in the material that we are studying.",
	"9. Encourages me to think and explore new ideas.","10. Tells the class at each meeting what we are going to do and what we are expected to learn.",
	"11. Treats all students respectfully.","12. Returns my papers, tests, and other work within two weeks of collecting them.",
	"13. Responds to my work so I know how I am doing and what I need to work on.",
	"14. Responds to me when I need help outside of class.","15. Follows the grading guidelines in our course syllabus and explains my grade if I ask.",
	"16. Helps me meet the goals and learning objectives/outcomes of the course.","17. Are the assignments clear.",
	"18. Does the instructor make good use of the live class time together."};
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n::                                                             ::");
    printf("\n::  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ::");
    printf("\n::  @                                                       @  ::");
    printf("\n::  @      Welcome To New Horizon College of Engineering    @  ::");
    printf("\n::  @                                                       @  ::");
    printf("\n::  @      Faculty Feedback System                          @  ::");
    printf("\n::  @                                                       @  ::");
    printf("\n::  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ::");
    printf("\n::                                                             ::");
    printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
	//printf("Welcome to New Horizon College of Engineering\n");
	printf("Faculty Feedback System\n");
	printf("\nDo you want to create a New Report or append on the Current Report\n");
	printf("1. Create New Report\n");
	printf("2. Update the Current Report\n");
	scanf("%d",&choicefile);
	if(choicefile==1){
		ptr = fopen("program.txt","w");
	}
	else{
		ptr = fopen("program.txt","a");
	}
	fputs("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::",ptr);
    fputs("\n::                                                            ::",ptr);
    fputs("\n:: @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ::",ptr);
    fputs("\n:: @                                                       @  ::",ptr);
    fputs("\n:: @      Welcome To New Horizon College of Engineering    @  ::",ptr);
    fputs("\n:: @                                                       @  ::",ptr);
    fputs("\n:: @      Faculty Feedback System                          @  ::",ptr);
    fputs("\n:: @                                                       @  ::",ptr);
    fputs("\n:: @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ::",ptr);
    fputs("\n::                                                            ::",ptr);
    fputs("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n",ptr);
	fputs("Faculty Feedback System\n",ptr);
	char teachermca[][30] = { "1. Dr. V. Asha", "2. Dr. K. G. Madhwaraj", "3. Dr. A. P. Nirmala", "4. Dr. B. Meenakshi Sundaram",
	"5. Prof. S. P. Sreeja","6. Prof. M. Govindaraj",
	"7. Prof. Viswanatha C R","8. Prof. S. N. Kavitha","9. Prof. Jincy C Mathew","10. Dr. R. Prema","11. Prof. Anu Bala"};
	char teachermba[][30] = {"1. Dr. Sheelan Mishra","2. Mr. Srikanth Rajath","3. Mr. Sheshu A","4. Dr. Priyameet Kaur Keer","5. Dr. Vijay Rao",
	"6. Dr. Smitha","7. Dr. Bandna Raj","8. Dr. Shruti Chirkundi"};
	char answeroptions[][20] = {"1. Never","2. Rarely","3. Sometimes","4. Often","5. Always"};
	do{
		int choicedepartment,i,j,choiceteacher,p,q,sum=0,choice;
		char firstname[200];
		char middlename[50];
		char lastname[50];
		char name[200];
		char usn[50];
		int answer[20];
		double result;
		printf("\nEnter Your Name ");
		printf("\nEnter Your FirstName:");
		//gets(firstname);
		scanf("%s", &firstname);
		printf("Enter Your LastName:");
		scanf("%s", &lastname);
		strcat(firstname," ");
		strcat(firstname,lastname);
		//name = firstname+" "+lastname;
		printf(firstname);
		fputs("Enter Your Name : ", ptr); 
		fputs(firstname,ptr);
		printf("\nEnter your USN: ");
		scanf("%s", usn);
		//gets(usn);
		fputs("\nEnter your USN : ",ptr);
		printf("%s",usn);
		fputs(usn,ptr);
		printf("\nChoose your department: ");
		fputs("\nChoose your department: ",ptr);
		fputs("\nChoose\n 1. MCA \n 2. MBA\n",ptr);
		printf("\nChoose\n 1. MCA \n 2. MBA\n");
		scanf("%d",&choicedepartment);
		if(choicedepartment == 1){
			printf("Your Choice : MCA\n");
			fputs("\nYour Choice : MCA",ptr);
		}
		else
		{
			printf("Your Choice : MBA\n");
			fputs("\n Your Choice : MBA",ptr);
	    }
		printf("\nSelect the teacher for whom you want to give the feedback:\n");	
		if(choicedepartment==1){
			for (i = 0; i < 11; i++) 
	        printf("%s\n",teachermca[i]);	
		}
		else{
			for (i = 0; i < 8; i++) 
	        printf("%s\n",teachermba[i]);
		}
		fputs("\n Teacher for whom you are giving feedback : ",ptr);
		printf("\nEnter the Choice: ");
		scanf("%d",&choiceteacher);
		if(choicedepartment==1){
		printf("Your choice: %s\n",teachermca[choiceteacher-1]);
		fputs(teachermca[choiceteacher-1],ptr);
		}
		else{
		printf("Your choice: %s\n",teachermba[choiceteacher-1]);
		fputs(teachermba[choiceteacher-1],ptr);	
		}
		for(j=0;j<18;j++){
			printf("\n%s",feedback[j]);
			fputs("\n",ptr);
			fputs(feedback[j],ptr);
			choice=0;
			do{
				if(choice>5){
				printf("Invalid Choice Choose Again\n");
				}
				printf("\nChoose Your answer");
				for(p=0;p<5;p++){
					printf("\n%s",answeroptions[p]);		
				}
				printf("\nEnter the Choice: ");
				scanf("%d",&choice);
			}while(choice>5);
			fputs("\n Your choice :\n",ptr);
			fputs(answeroptions[choice-1],ptr);
			fputs("\n",ptr);
			printf("Your choice : %s\n",answeroptions[choice-1]);
			answer[j]= choice;			
		}
		for(q=0;q<18;q++){
			sum = sum + answer[q];
		}
		int count = 18;
		printf("sum = %d",sum);
		result = (double) sum / count;
		if (choicedepartment==1){
			fputs("\n Total score of teacher ",ptr);
			fputs(teachermca[choiceteacher-1],ptr);
			fputs(" = ",ptr);
			fprintf(ptr, "%f ", result);
			fputs("out of 5\n\n",ptr);
			printf("\n Total score of teacher %s = %f out of 5\n",teachermca[choiceteacher-1],result);
		}
		else{
			fputs("\n Total score of teacher ",ptr);
			fputs(teachermba[choiceteacher-1],ptr);
			fputs(" = ",ptr);
			fprintf(ptr,"%f ",result);
			fputs("out of 5\n\n",ptr);
			printf("\n Total score of teacher %s = %f out of 5\n",teachermba[choiceteacher-1],result);
		}
		printf("\nDo you want to continue?\n1. YES\n0. NO\n");
		scanf("%d",&choice3);
	}while(choice3!=0);
	fclose(ptr);
	return 0;	
}
