#include<stdio.h>

int main(){
	int score;
	
	printf("enter your score :");
	   scanf("%d", &score);
	
	char grade;
	switch(score/10){
		case 10:
		case 9:
			grade = 'A'; //for score blow 90-100
			break;
		case 8:
			grade = 'B'; //for score blow 80-89
			break;
		case 7:
			grade = 'C'; //for score blow 70-79
			break;
		case 6:
			grade = 'D'; //for score blow 60-69
			break;
		default:
			grade = 'F'; //for score blow 60
			break;
	}
	printf("your grede is:%c",score);
	
	switch (grade) {
		case 'A':
			printf("Excllend work!");
			break;
		case 'B':
			printf("Well done");
			break;
			
		case 'C':
			printf("Good job");
			break;
			
		case 'D':
			printf("You passed, but you could do better");
			break;
			
		case 'F':
			printf("Sorry, you failed");
			break;
		default:
			printf("Invalid grade");
			break;
	}
	 // Eligibility Check using if-else
    if (grade >= 'A' && grade <= 'D') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}

