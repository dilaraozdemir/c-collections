#include <stdio.h>
int main(){
	/*20.Write C code to count 
	number of digits in a number*/
	int n;
	int i=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0){
		n=n/10;
		i++;
	}
	printf("%d",i);
}
