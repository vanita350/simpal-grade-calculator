#include<stdio.h>

int main(){
	
	int score;
	
	printf("enter your score :");
		scanf("%d",&score);
	
		char grade;
		switch(score / 10){
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
				grade = 'D';//for score blow 60-69
				break;
		    default:
		    	grade = 'F'; //for score blow 
		    	break;
		}
		printf("your graed is %c\n",grade);
	
}
