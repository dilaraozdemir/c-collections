#include<stdio.h>
/*sum of two numbers*/
int main(){
	int a, b;
	int sum;
	
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	
	sum = a + b;
	
	printf("%d + %d = %d",a,b,sum);
	
	return 0;
	
	
}
