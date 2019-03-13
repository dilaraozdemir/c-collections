#include<stdio.h>
int main(){
	/*11.Write C code for a program that reads 10 numbers 
	from the user and prints
	out their sum, and their product.*/
	int i;
	int a;
	int sum=0;
	int product=1;
	
	for(i=0;i<10;i++){
		scanf("%d",&a);
		sum+=a;
		product*=a;		
	}
	printf("%d\n",sum);
	printf("%d",product);
	
}
