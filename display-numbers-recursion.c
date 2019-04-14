/* Display all numbers 1 to entered numbers */
#include <stdio.h>
int displayNumbers(int num){
	if(num==0)
		return 1;
	else{ 
		printf("%d\n",num);
		return displayNumbers(num-1); 
	}
}
int main(){
   int number;
   
   printf("Enter a number: ");
   scanf("%d",&number);
   displayNumbers(number);
}
