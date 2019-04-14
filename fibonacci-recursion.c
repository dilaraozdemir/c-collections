/*Write a program in C to print Fibonacci Series using recursion.*/
#include <stdio.h>
 
int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return fibonacci(n-1) + fibonacci (n-2);
	}
}
int main(){
	int i, n;
	printf("How many fibonacci you want? ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("Number: %d : %d \n",i,fibonacci(i));
	}
	return 0;
}
