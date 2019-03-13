#include<stdio.h>
int main(){
	/*8. Write C code to print the SUM 
	of numbers from LOW to HIGH. 
	Test with LOW=3 and HIGH=9*/
	int sum=0;
	int i;
	for(i=3;i<=9;i++)
		sum+=i;
	printf("%d",sum);
}
