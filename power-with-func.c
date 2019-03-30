/*1. C program to find power of a number using function
Write a C program to input a number from user and find power of given number using recursion. How to find power of a number using recursive function in C programming. Logic to find power of a number using recursion in C programming.
*/
#include <stdio.h>
int power(int a, int b){
	int i=0;
	int pow=1;
	for(i;i<b;i++){
		pow*=a;
	}
	return pow;
}
int main(){
	int x,y;
	printf("Enter the base: \n");
	scanf("%d",&x);
	printf("Enter the exponent: \n");
	scanf("%d",&y);
	printf("Result: %d",power(x,y));
}
