/* Write a program in C to count the digits of a given number using recursion. */
#include<stdio.h>

int noOfDigits(int);
int main()
{
  int number,i;
    printf("Enter a number: ");
    scanf("%d",&number);

    i = countDigits(number);

    printf("The number of digits in the number: %d",i);
    return 0;
}

int countDigits(int num)
{
    static int ctr=0;

    if(num!=0){
        ctr++;
        countDigits(num/10);
    }

    return ctr;
}
