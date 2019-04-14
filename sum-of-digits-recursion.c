/*Write a program in C to find the sum of digits of a number using recursion.*/
#include <stdio.h>
int digitSum(int);
 
int main()
{
    int number, sum;    
    printf("Enter a number: ");
    scanf("%d", &number);
     
    sum = digitSum(number);//call the function for calculation
     
    printf("The Sum of digits of %d = %d", number, sum);
     
    return 0;
}

int digitSum(int num){
    if(num == 0)
        return 0;
	else
    	return ((num % 10) + digitSum(num / 10));
}
