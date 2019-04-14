/* Total of numbers 1 to n Recursion */
#include <stdio.h>
int total(int num){
	if(num==0)
		return 1;
	else
		return num + total(num-1);
}
int main(){
   int number,result;
   printf("Enter the number: ");
   scanf("%d",&number);
   result = total(number) - 1;
   printf("Result : %d",result);
}
