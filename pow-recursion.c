/*
 * C Program to find Power of a Number using Recursion
 */
#include <stdio.h>
 
long power (int, int);
int main()
{
    int pow, num;
    long result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("%d^%d is %ld", num, pow, result);
    return 0;
}
 
long power (int num, int pow)
{
    if (pow>0){
    	return (num * power(num, pow - 1));
    }
    else
    	return 1;
}
