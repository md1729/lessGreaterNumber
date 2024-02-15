//Example 3: Write a C Program that prints which of the two numbers entered is smaller.
#include<stdio.h>
int main(){
int num1,num2;
printf("Enter two numbers:\n");
scanf("%d%d",&num1,&num2);

if(num1<num2)
printf("%d is less than %d.\n",num1,num2);
else if(num1>num2)
printf("%d is greater than %d.\n",num1,num2);
else
printf("Entered numbers are equal to each other.\n");
return 0;	
	
}
